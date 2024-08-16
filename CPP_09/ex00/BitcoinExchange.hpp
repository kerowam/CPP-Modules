/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:56:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/16 23:29:44 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <map>
# include <string>
# include <fstream>
# include <sstream>

class BitcoinExchange
{
	private:
		std::map<std::string, float> _datesAndBtcPrices;

		BitcoinExchange();

	public:
		BitcoinExchange(std::string file);
		BitcoinExchange(const BitcoinExchange& bitcoinExchange);
		~BitcoinExchange();

		BitcoinExchange& operator=(const BitcoinExchange& bitcoinExchange);
		
		void	getBtcprices(std::string fileName);
};

#endif