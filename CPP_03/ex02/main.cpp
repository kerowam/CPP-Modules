/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3024/06/01 04:01:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 01:25:16 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	FragTrap	FT_instance_1("Frag");
	FragTrap	FT_instance_2("Trap");

	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_2.beRepaired(10);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_1.beRepaired(10);
	FT_instance_2.beRepaired(10);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_2.takeDamage(30);
	FT_instance_1.attack("Trap");
	FT_instance_2.beRepaired(10);
	FT_instance_1.attack("Trap");
	FT_instance_2.attack("Frag");
	FT_instance_1.beRepaired(10);
	FT_instance_1.setEnergyPoints(0);
	FT_instance_1.beRepaired(10);
	FT_instance_1.attack("Trap");
	FT_instance_1.highFivesGuys();
	FT_instance_2.highFivesGuys();

	return 0;
}