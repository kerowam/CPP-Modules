/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:57 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/18 22:49:26 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name)
{
	this->_name = name;	
}

HumanB::~HumanB() {}

void HumanB::attack()
{
	std::cout << _name << " attack with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}