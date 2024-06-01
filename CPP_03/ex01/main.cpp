/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 04:01:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 17:20:33 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap	ST_instance_1("Scav");
	ScavTrap	ST_instance_2("Trap");

	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_2.beRepaired(10);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_1.beRepaired(10);
	ST_instance_2.beRepaired(10);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_2.takeDamage(20);
	ST_instance_1.attack("Trap");
	ST_instance_2.beRepaired(10);
	ST_instance_1.attack("Trap");
	ST_instance_2.attack("Scav");
	ST_instance_1.beRepaired(10);
	ST_instance_1.setEnergyPoints(0);
	ST_instance_1.beRepaired(10);
	ST_instance_1.attack("Trap");
	ST_instance_1.guardGate();
	ST_instance_2.guardGate();
	return 0;
}