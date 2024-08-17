/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:55:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 18:47:09 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}


BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream 	dataFile(file.c_str());
	std::string		format;
	std::string		line;
	std::string		date;
	float			exchange;

	format = file.substr(file.length() - 4);
	if (format != ".csv")
	{
		std::cerr << "Error: invalid format of data file." << std::endl;
		exit(1);
	}
	if (!dataFile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
	std::getline(dataFile, line);
	while (std::getline(dataFile, line))
	{
		std::istringstream	splitLine(line);
		if (std::getline(splitLine, date, ',') && splitLine >> exchange)
			_datesAndBtcPrices[date] = exchange;
		else
		{
			std::cerr << "Error: invalid format of data file." << std::endl;
			exit(1);
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& bitcoinExchange)
{
	*this = bitcoinExchange;
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& bitcoinExchange)
{
	if (this != &bitcoinExchange)
		_datesAndBtcPrices = bitcoinExchange._datesAndBtcPrices;
	return *this;
}

static bool	checkDate(std::string &date)
{
	std::string	year_str;
	std::string	month_str;
	std::string	day_str;
	int	year;
	int	month;
	int	day;
	
	date.erase(0, date.find_first_not_of(' '));
	date.erase(date.find_last_not_of(' ') + 1);
	if (date[4] != '-' || date[7] != '-' || date.size() != 10)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return false;
	}
	year_str = date.substr(0, 4);
	for (int i = 0; i < 4; i++)
	{
		if (!isdigit(year_str[i]))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			return false;
		}
	}
	month_str = date.substr(5, 2);
	day_str = date.substr(8, 2);
	for (int i = 0; i < 2; i++)
	{
		if (!isdigit(month_str[i]) || !isdigit(day_str[i]))
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			return false;
		}
	}
	year = std::atoi(year_str.c_str());
	month = std::atoi(month_str.c_str());
	day = std::atoi(day_str.c_str());
	if (year < 2009 || (year == 2009 && month == 1 && day == 1))
	{
		std::cerr << "Error: bad input => " << date << " (Bitcoins didn't exist yet)." << std::endl;
		return false;
	}
	else if (month == 0 || month > 12)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return false;
	}
	else
	{
		int	limitDay;
		if (month == 4 || month == 6 || month == 9 || month == 1)
			limitDay = 30;
		else if (month == 2)
		{
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
				limitDay = 29;
			else
				limitDay = 28;
		}
		else
			limitDay = 31;
		if (day == 0 || day > limitDay)
		{
			std::cerr << "Error: bad input => " << date << std::endl;
			return false;
		}
	}
	return true;
}

static bool	checkValue(float &value)
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (value > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::getBtcPrices(std::string fileName)
{
	std::ifstream	inputFile(fileName.c_str());
	std::string		line;

	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		std::istringstream	splitLine(line);
		std::string		date;
		std::string		value_str;
		float			value;
		if (!(std::getline(splitLine, date, '|') && splitLine >> value_str))
			std::cerr << "Error: bad input => " << line << std::endl;
		else
		{
			bool	value_is_float = true;
			for (size_t i = 0; i < value_str.size(); i++)
			{
				if ((i == 0 && value_str[0] != '-' && !isdigit(value_str[0]))
					|| (i != 0 && !isdigit(value_str[i]) && value_str[i] != '.'))
				{
					value_is_float = false;
					std::cerr << "Error: bad input => " << value_str << std::endl;
					break ;
				}
			}
			if (value_is_float)
			{
				value = std::atof(value_str.c_str());

				if (checkDate(date) && checkValue(value))
				{
					double	btcPrice;

					if (_datesAndBtcPrices.find(date) != _datesAndBtcPrices.end())
					{
						btcPrice = _datesAndBtcPrices[date];
						std::cout << date << " => " << value << " = " << btcPrice * value << std::endl;
					}
					else
					{
						std::string	closestDate;
						std::map<std::string, float>::iterator	iter_map = _datesAndBtcPrices.begin();
						while (++iter_map != _datesAndBtcPrices.end())
						{
							if (iter_map->first < date)
								closestDate = iter_map->first;
							else
								break ;
						}
						btcPrice = _datesAndBtcPrices[closestDate];
						std::cout << date << " => " << value << " = " << btcPrice * value << std::endl;
					}
				}
			}
		}
	}
}