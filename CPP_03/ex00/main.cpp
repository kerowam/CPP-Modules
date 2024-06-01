/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:12:13 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 03:46:27 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cp_tp1("Clap");
	ClapTrap	cp_tp2("Trap");

	cp_tp1.attack("Trap");
	cp_tp2.takeDamage(5);
	cp_tp2.beRepaired(3);
	cp_tp1.attack("Trap");
	cp_tp2.takeDamage(5);
	cp_tp1.attack("Trap");
	cp_tp2.takeDamage(5);
	cp_tp1.attack("Trap");
	cp_tp1.beRepaired(2);
	cp_tp2.beRepaired(3);
	cp_tp2.attack("Clap");
	cp_tp1.attack("Trap");
	cp_tp1.attack("Trap");
	cp_tp1.attack("Trap");
	cp_tp1.attack("Trap");
	cp_tp1.attack("Trap");
	cp_tp1.attack("Trap");
	cp_tp1.beRepaired(2);
}