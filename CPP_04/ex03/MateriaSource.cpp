/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:03:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/18 16:40:57 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource& instance)
{
	*this = instance;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])	
			delete(this->_materias[i]);
	}
}
	
MateriaSource&	MateriaSource::operator=(MateriaSource& instance)
{
	if (this != &instance)
	{
		for (int i = 0; i < 4; i++)
		{
			if(this->_materias[i])
				delete(_materias[i]);
			this->_materias[i] = instance._materias[i]->clone();
		}
	}
	return *this;
}

void			MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;
	while (i < 4 && this->_materias[i])
		i++;
	if (i < 4)
	{
		this->_materias[i] = m;
		return;
	}
	else
		std::cout << "No space left to learn a new materia! Nothing happens!" << std::endl;
	delete (m);
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] && this->_materias[i]->getType() == type)
			return this->_materias[i]->clone();
	}
	std::cout << "Type of materia not available! Nothing happens!" << std::endl;
	return 0;
}