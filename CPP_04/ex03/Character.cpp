/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:02:26 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/18 17:04:54 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

Character::Character(Character& instance)
{
	*this = instance;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete(_inventory[i]);
	}
}
	
Character&	Character::operator=(Character& instance)
{
	if (this != &instance)
	{
		this->_name = instance._name;
		for (int i = 0; i < 4; i++)
		{
			if(this->_inventory[i])
				delete(_inventory[i]);
			this->_inventory[i] = instance._inventory[i]->clone();
		}
	}
	return *this;
}

Character::Character(std::string name):
_name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
}

std::string const & Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	int	i = 0;
	while (i < 4 && this->_inventory[i])
		i++;
	if (i < 4)
	{
		this->_inventory[i] = m;
		return;
	}
	else
		std::cout << "No space on inventory! Nothing happens!" << std::endl;
	delete m;
	return;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		delete (_inventory[idx]);
		this->_inventory[idx] = 0;
	}
	else
		std::cout << "There's no materia to unequip! Nothing happens!" << std::endl;
	return;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
	else
		std::cout << "There's no materia to use! Nothing happens!" << std::endl;
	return;
}