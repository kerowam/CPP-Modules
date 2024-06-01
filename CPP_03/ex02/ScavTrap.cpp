/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 03:52:05 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 01:11:01 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called! Default ScavTrap " << this->getName() << " created." << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called! ScavTrap " << this->getName() << " created." << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap& ST_instance)
{
	*this = ST_instance;
	std::cout << "ScavTrap Copy constructor called! ScavTrap " << this->getName() << " copied." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called! ScavTrap " << this->getName() << " destroyed." << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap& ST_instance)
{
	if (this != &ST_instance)
	{
		this->setName(ST_instance.getName());
		this->setHitPoints(ST_instance.getHitPoints());
		this->setEnergyPoints(ST_instance.getEnergyPoints());
		this->setAttackDamage(ST_instance.getAttackDamage());

	}
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << std::endl;
	std::cout << "                                 ---ScavTrap ATTACK!---" << std::endl;
	std::cout << std::endl;
	if (this->getHitPoints() == 0)
		std::cout << "ScavTrap " << this->getName() << " can't attack. " << this->getName() << " looks dead!" << std::endl;
	else if (this->getEnergyPoints() == 0)
		std::cout << "ScavTrap " << this->getName() << " don't have energy to attack!!!" << std::endl;
	else
	{
		this->setEnergyPoints(this->getEnergyPoints() - 1);
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << "                                 ---ScavTrap GATE KEEPER MODE!---" << std::endl;
	std::cout << std::endl;
	if (this->getHitPoints() > 0)
		std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is out of service!" << std::endl;
}