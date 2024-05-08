/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:30 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 23:04:55 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){};

HumanA::~HumanA(){};

HumanA::HumanA(std::string name, Weapon weapon_type)
{
	this->name = name;
	this->weapon = weapon_type;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
}