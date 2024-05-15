/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:30 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/08 22:50:09 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA() {};

HumanA::HumanA(std::string name, Weapon& weapon_type) : _name(name), _weapon(weapon_type) {}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
}