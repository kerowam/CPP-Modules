/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:55:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/16 23:21:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}


BitcoinExchange::BitcoinExchange(std::string file)
{
	std::ifstream 	data_file(file.c_str());
	std::string		format;
	std::string		line;
	std::string		date;
	float			price;

	format = file.substr(file.length() - 4);
	if (format != ".csv")
	{
		std::cerr << "Error: invalid format of data file." << std::endl;
		exit(1);
	}
	if (!data_file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		exit(1);
	}
	std::getline(data_file, line);
	while (std::getline(data_file, line))
	{
		std::stringstream	splitLine(line);
		if (std::getline(splitLine, date, ',') && splitLine >> price)
			_datesAndBtcPrices[date] = price;
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
		
void	BitcoinExchange::getBtcprices(std::string fileName)
{

}