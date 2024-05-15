/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:07:45 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 15:58:40 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	input_level;
	bool		valid_input = false;

	while (valid_input == false)
	{
		std::cout << "Enter one of the following complain type (DEBUG, INFO, WARNING or ERROR): ";
		std::cin >> input_level;
		std::cout << std::endl;
		if (input_level != "DEBUG" && input_level != "INFO" && input_level != "WARNING" && input_level != "ERROR")
			std::cout << "Complain type don't exist. Enter a valid complain type." << std::endl << std::endl;
		else
			valid_input = true;
	}
	harl.complain(input_level);
	return 0;
}