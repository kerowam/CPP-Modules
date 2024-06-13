/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:00:08 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/13 13:56:18 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
AMateria("ice")
{}

Ice::Ice(Ice& instance)//:
//AMateria("ice")			???
{
	*this = instance;
}

Ice::~Ice() {}

Ice&	Ice::operator=(Ice& instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

AMateria*	Ice::clone() const
{
	AMateria *ice_clone = new Ice();
	return ice_clone;
}

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice ball at " << target.getName() << " *" << std::endl;
}