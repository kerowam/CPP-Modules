/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:38:54 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 02:40:01 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed() {}

Sed::~Sed()
{
	if (this->_inFile.is_open() == true)
		this->_inFile.close();
	if (this->_outFile.is_open() == true)
		this->_outFile.close();
}

bool	Sed::string_replace(std::string filename, std::string s1, std::string s2)
{
	_inFile.open(filename.c_str(), std::fstream::in);
	if (_inFile.fail() == true)
	{
		std::cout << "Error opening file: " << filename << std::endl;
		return (false);
	}
	_outFile.open(("New_" + filename).c_str(), std::fstream::out);
	if (_outFile.fail() == true)
	{
		std::cout << "Error creating New_file: Nex_" << filename << std::endl;
		return (false);
	}

	std::string	buff;

	while (std::getline(_inFile, buff))
	{
		std::size_t		i = 0;
		while (i < buff.length())
		{
			std::size_t		pos = buff.find(s1, i);
			if (pos != std::string::npos)
			{
				_outFile << buff.substr(i, pos - i) << s2;
				i = pos + s1.length();
			}
			else
			{
				_outFile << buff.substr(i);
				i = buff.length();
			}
		}
		if (_inFile.eof() == false)
			_outFile << std::endl;
	}
	return (true);
}