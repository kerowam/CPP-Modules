/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:12:13 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 16:57:28 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	CT_instance_1("Clap");
	ClapTrap	CT_instance_2("Trap");

	CT_instance_1.attack("Trap");
	CT_instance_2.takeDamage(5);
	CT_instance_2.beRepaired(3);
	CT_instance_1.attack("Trap");
	CT_instance_2.takeDamage(5);
	CT_instance_1.attack("Trap");
	CT_instance_2.takeDamage(5);
	CT_instance_1.attack("Trap");
	CT_instance_1.beRepaired(2);
	CT_instance_2.beRepaired(3);
	CT_instance_2.attack("Clap");
	CT_instance_1.attack("Trap");
	CT_instance_1.attack("Trap");
	CT_instance_1.attack("Trap");
	CT_instance_1.attack("Trap");
	CT_instance_1.attack("Trap");
	CT_instance_1.attack("Trap");
	CT_instance_1.beRepaired(2);
}