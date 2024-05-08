/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:14:36 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 22:57:50 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::~Weapon(){};

Weapon::Weapon(std::string weapon)
{
	this->setType(weapon);
}

std::string const Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
