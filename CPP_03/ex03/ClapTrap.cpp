/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:12:34 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 17:45:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("DefClapTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor called! Default ClapTrap " << _name << " created."<< std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called! ClapTrap " << _name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& CT_instance):
_name(CT_instance._name), _hit_points(CT_instance._hit_points), _energy_points(CT_instance._energy_points), _attack_damage(CT_instance._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called! ClapTrap " << _name << " copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called! ClapTrap " << _name << " destroyed." << std::endl;

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
	std::cout << std::endl;
	std::cout << "                                 ---ClapTrap ATTACKING!---" << std::endl;
	std::cout << std::endl;
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
	std::cout << std::endl;
	std::cout << "                                 ---ClapTrap TAKING DAMAGE!---" << std::endl;
	std::cout << std::endl;
	if (_hit_points == 0)
		std::cout << "ClapTrap " << _name << " is already out of game." << std::endl;
	else
	{
		if (_hit_points < amount)
			_hit_points = 0;
		else
			_hit_points -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage! " << _name << " has now " << _hit_points << " hit points!";
		if (_hit_points == 0)
			std::cout << " And now is KO!";
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << std::endl;
	std::cout << "                                 ---ClapTrap REPAIRING!---" << std::endl;
	std::cout << std::endl;
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

std::string		&ClapTrap::getName()
{
	return _name;
}

void			ClapTrap::setName(std::string& name)
{
	_name = name;
}

unsigned int	&ClapTrap::getHitPoints()
{
	return _hit_points;
}

void			ClapTrap::setHitPoints(unsigned int hit_points)
{
	_hit_points = hit_points;
}

unsigned int	&ClapTrap::getEnergyPoints()
{
	return _energy_points;
}

void			ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	_energy_points = energy_points;
}

unsigned int	&ClapTrap::getAttackDamage()
{
	return _attack_damage;
}

void			ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	_attack_damage = attack_damage;
}