/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:30 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 19:15:36 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){};

HumanA::~HumanA(){};

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon.getType();
}

void HumanA::attack()
{
	std::cout << name << " attack with their " << weapon << std::endl;
}