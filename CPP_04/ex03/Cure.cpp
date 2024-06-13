/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:00:32 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/13 14:05:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
AMateria("cure")
{}

Cure::Cure(Cure& instance)
{
	*this = instance;
}

Cure::~Cure() {}

Cure&	Cure::operator=(Cure& instance)
{
	if (this != &instance)
		this->_type = instance._type;
	return *this;
}

AMateria*	Cure::clone() const
{
	AMateria *cure_clone = new Cure();
	return cure_clone;
}

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}