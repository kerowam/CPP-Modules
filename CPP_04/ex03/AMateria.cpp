/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:59:27 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/13 13:43:27 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(AMateria& instance)
{
	*this = instance;
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type):
_type(type)
{}

AMateria&			AMateria::operator=(AMateria& instance)
{
	if (this != &instance)
	{
		//delete(this);
		AMateria *other_materia = instance.clone();
		return *other_materia;
	}
	return *this;
}

std::string	const	& AMateria::getType() const
{
	return this->_type;
}

void		AMateria::use(ICharacter& target)
{

}