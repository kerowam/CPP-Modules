/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:38:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 00:05:36 by gfredes-         ###   ########.fr       */
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
		void	string_replace(std::string filename, std::string s1, std::string s2);

	private:
		std::string	_filename;
		std::string	_s1;
		std::string	_s2;
};

#endif