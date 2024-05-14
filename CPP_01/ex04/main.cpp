/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:38:34 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 00:36:38 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char *argv[])
{
	Sed	str_replacer;

	if (argc == 4)
	{
		if (!argv[1][0] || !argv[2][0] || !argv[3][0])
		{
			std::cout << "Arguments can't be empty!" << std::endl;
			return 2;
		}
		else if (str_replacer.string_replace(argv[1], argv[2], argv[3]) == false)
			return 3;
	}
	else
	{
		std::cout << "Wrong arguments!" << std::endl;
		std::cout << "Program instructions: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	return 0;
}