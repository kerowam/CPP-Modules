/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:14:36 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 19:15:21 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::~Weapon(){};

Weapon::Weapon(std::string weapon)
{
	Weapon::setType(weapon);
}

std::string const Weapon::getType()
{
	return _type;
}

void Weapon::setType(std::string _type)
{
	_type = _type;
}
