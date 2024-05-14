/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:38:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 02:13:05 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <string>
# include <fstream>

class	Sed
{
	public:
		Sed();
		~Sed();
		bool			string_replace(std::string filename, std::string s1, std::string s2);

	private:
		std::fstream	_inFile;
		std::fstream	_outFile;
};

#endif