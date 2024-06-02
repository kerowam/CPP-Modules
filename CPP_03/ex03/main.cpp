/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 3024/06/01 04:01:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 02:58:55 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	DT_instance_1("Diamond");
	DiamondTrap	DT_instance_2("Trap");

	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_2.beRepaired(10);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_1.beRepaired(10);
	DT_instance_2.beRepaired(10);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_2.takeDamage(30);
	DT_instance_1.attack("Trap");
	DT_instance_2.beRepaired(10);
	DT_instance_1.attack("Trap");
	DT_instance_2.attack("Diamond");
	DT_instance_1.beRepaired(10);
	DT_instance_1.setEnergyPoints(0);
	DT_instance_1.beRepaired(10);
	DT_instance_1.attack("Trap");
	DT_instance_1.highFivesGuys();
	DT_instance_2.highFivesGuys();
	DT_instance_1.guardGate();
	DT_instance_2.guardGate();
	DT_instance_1.whoAmI();
	DT_instance_2.whoAmI();
}