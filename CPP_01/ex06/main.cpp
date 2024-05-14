/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:08:58 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 17:14:06 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		std::cout << "Program use: ./harlFilter <typo_of_complain>" << std::endl; 
	}
	else
	{
		Harl		harl;
		std::string	level;

		level += argv[1];
		harl.complain(level);
	}
}