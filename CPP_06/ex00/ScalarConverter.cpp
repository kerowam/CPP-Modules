/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:11:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/05 18:52:29 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& instance)
{
	(void)instance;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& instance)
{
	(void)instance;
	return *this;
}

void	ScalarConverter::convert(const std::string& str)
{
	std::string	type = "";
	std::string	toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		type = "float";
	else if (str == "-inf" || str == "+inf" || str == "nan")
		type = "double";
	else if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		toChar = str[0];
		std::cout << "char:\t'" << toChar << "'" << std::endl;
		std::cout << "int:\t" << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float:\t" << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double:\t" << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}
	else
		type = "int";
	if (type == "int")
	{
		for (int i = 0; str[i]; i++)
		{
			if (i == 0 && (str[i] == '+' || str[i] == '-'))
				i++;
			if (i != 0 && i == (str.length() - 1) && str[i] == 'f')
				type = "float";
			else if (str[i] != '.' && !std::isdigit(str[i]))
			{
				std::cout << "Invalid argument!" << std::endl;
				return ;
			}
			else if (i != 0 && str[i] == '.')
				type = "double";
		}
	}
	if (type == "int")
	{
		long	integer = strtol(str.c_str(), NULL, 10);
		if (integer < std::numeric_limits<int>::min() || integer > std::numeric_limits<int>::max())
		{
			std::cout << "Error: Invalid int!" << std::endl;
			return ;
		}
		else
		{
			toInt = static_cast<int>(integer);
			toChar = static_cast<char>(toInt);
			if (integer < 0 || integer > 127)
				std::cout << "char:\timpossible" << std::endl;
			else if (toChar[0] > 31 && toChar[0] < 127)
				std::cout << "char:\t'" << toChar << "'" << std::endl;
			else
				std::cout << "char:\tNon displayable" << std::endl;
			std::cout << "int:\t" << toInt << std::endl;
			std::cout << "float:\t" << static_cast<float>(toInt) << ".0f" << std::endl;
			std::cout << "double:\t" << static_cast<double>(toInt) << ".0" << std::endl;
		}
	}
	else if (type == "float")
	{
		double	flt;

		if (str == "-inff")
			flt = -std::numeric_limits<float>::infinity();
		else if (str == "inff")
			flt = std::numeric_limits<float>::infinity();
		else if (str == "nanf")
			flt = std::numeric_limits<float>::quiet_NaN();
		else
		{
			flt = strtod(str.c_str(), NULL);
			if (flt < std::numeric_limits<float>::min() || flt > std::numeric_limits<float>::max())
			{
				std::cout << "Error: Invalid float!" << std::endl;
				return ;
			}
		}
		toFloat = static_cast<float>(flt);
		toChar = static_cast<char>(toFloat);
		if (str == "-inff" || str == "+inff" || str == "nanf" || flt < 0 || flt > 127)
			std::cout << "char:\timpossible" << std::endl;
		else if (toChar[0] > 31 && toChar[0] < 127)
			std::cout << "char:\t'" << toChar << "'" << std::endl;
		else
			std::cout << "char:\tNon displayable" << std::endl;
		if (flt < std::numeric_limits<int>::min() || flt > std::numeric_limits<int>::max())
			std::cout << "int:\timpossible" << std::endl;
		else
			std::cout << "int:\t" << static_cast<int>(toFloat) << std::endl;
		if (toFloat - static_cast<int>(toFloat) == 0)
		{
			std::cout << "float:\t" << toFloat << ".0f" << std::endl;
			std::cout << "double:\t" << static_cast<double>(toFloat) << ".0" << std::endl;
		}
		else
		{
			std::cout << "float:\t" << toFloat << "f" << std::endl;
			std::cout << "double:\t" << static_cast<double>(toFloat) << std::endl;
		}
	}
	else if (type == "double")
	{
		long double	dbl;

		if (str == "-inf")
			dbl = -std::numeric_limits<double>::infinity();
		else if (str == "inf")
			dbl = std::numeric_limits<double>::infinity();
		else if (str == "nan")
			dbl = std::numeric_limits<double>::quiet_NaN();
		else
		{
			dbl = strtold(str.c_str(), NULL);
			if (dbl < std::numeric_limits<double>::min() || dbl > std::numeric_limits<double>::max())
			{
				std::cout << "Error: Invalid double!" << std::endl;
				return ;
			}
		}
		toDouble = static_cast<double>(dbl);
		toChar = static_cast<char>(toDouble);
		if (str == "-inf" || str == "+inf" || str == "nan" || dbl < 0 || dbl > 127)
			std::cout << "char:\timpossible" << std::endl;
		else if (toChar[0] > 31 && toChar[0] < 127)
			std::cout << "char:\t'" << toChar << "'" << std::endl;
		else
			std::cout << "char:\tNon displayable" << std::endl;
		if (str == "-inf" || str == "+inf" || str == "nan"
		|| dbl < std::numeric_limits<int>::min() || dbl > std::numeric_limits<int>::max())
			std::cout << "int:\timpossible" << std::endl;
		else
			std::cout << "int:\t" << static_cast<int>(toDouble) << std::endl;
		if (toDouble < std::numeric_limits<float>::min() || toDouble > std::numeric_limits<float>::max())
		{
			std::cout << "float:\timpossible" << std::endl;
			if (toDouble - static_cast<int>(toDouble) == 0)
				std::cout << "double:\t" << toDouble << ".0" << std::endl;
			else
				std::cout << "double:\t" << toDouble << std::endl;
		}
		else if (toDouble - static_cast<int>(toDouble) == 0)
		{
			std::cout << "float:\t" << static_cast<float>(toDouble) << ".0f" << std::endl;
			std::cout << "double:\t" << toDouble << ".0" << std::endl;
		}
		else
		{
			std::cout << "float:\t" << static_cast<float>(toDouble) << "f" << std::endl;
			std::cout << "double:\t" << toDouble << std::endl;
		}
	}
}