/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:08:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 17:33:12 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	lvls[0].lvl = "DEBUG";
	lvls[0].ft = &Harl::debug;
	lvls[1].lvl = "INFO";
	lvls[1].ft = &Harl::info;
	lvls[2].lvl = "WARNING";
	lvls[2].ft = &Harl::warning;
	lvls[3].lvl = "ERROR";
	lvls[3].ft = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< " I really do!" << std::endl << std::endl;
}
void	Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	<< "years whereas you started working here since last month." << std::endl << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	while (i < 4)
	{
		if (level == lvls[i].lvl)
			break ;
		else 
			i++;
	}
	switch (i)
	{
		case 0:
			for (int j = 0; j < 4; j++)
				(this->*lvls[j].ft)();
			break;
	
		case 1:
			for (int j = 1; j < 4; j++)
				(this->*lvls[j].ft)();
			break;

		case 2:
			for (int j = 2; j < 4; j++)
				(this->*lvls[j].ft)();
			break;

		case 3:
			(this->*lvls[3].ft)();
			break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}