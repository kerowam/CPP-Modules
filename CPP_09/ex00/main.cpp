/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:54:58 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 12:54:49 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}
	else if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		std::cerr << "Usage: ./btc <name of input file>." << std::endl;
		return 2;
	}
	BitcoinExchange btcExchange("data.csv");
	btcExchange.getBtcPrices("input.txt");
	return 0;
}