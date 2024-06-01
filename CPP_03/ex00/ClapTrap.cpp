/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:12:34 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 15:54:32 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Zombie"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& CT_instance):
_name(CT_instance._name), _hit_points(CT_instance._hit_points), _energy_points(CT_instance._energy_points), _attack_damage(CT_instance._attack_damage)
{
	std::cout << "Copy constructor called!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;

}

ClapTrap&	ClapTrap::operator=(const ClapTrap& CT_instance)
{
	if (this != &CT_instance)
	{
		this->_name = CT_instance._name;
		this->_hit_points = CT_instance._hit_points;
		this->_energy_points = CT_instance._energy_points;
		this->_attack_damage = CT_instance._attack_damage;
	}
	return *this;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't attack. " << _name << " looks dead!" << std::endl;
	else if (_energy_points == 0)
		std::cout << "ClapTrap " << _name << " don't have energy to attack!!!" << std::endl;
	else
	{
		--_energy_points;
		std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " is already out of game." << std::endl;
	else
	{
		if (_hit_points < amount)
			_hit_points = 0;
		else
			_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage!";
		if (_hit_points == 0)
			std::cout << " And now is KO!";
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " can't repair himself. " << _name << " looks dead!" << std::endl;
	else if (_energy_points == 0)
		std::cout << "ClapTrap " << _name << " don't have energy to do nothing!!! Reparation Failed!" << std::endl;
	else
	{
		--_energy_points;
		_hit_points += amount;
		std::cout << "ClapTrap " << _name << " repairs himself! " << _name << " has now " << _hit_points << " hit points!" << std::endl;
	}
	
}