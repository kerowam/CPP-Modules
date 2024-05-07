/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:57 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 19:15:50 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{

}
HumanB::HumanB(std::string name)
{
	this->name = name;	
}

HumanB::~HumanB()
{

}

void HumanB::attack()
{
	std::cout << name << " attack with their " << weapon << std::endl;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon.getType();
}