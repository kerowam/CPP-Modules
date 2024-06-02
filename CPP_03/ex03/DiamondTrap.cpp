/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 01:38:56 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 03:05:34 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Def_clap_name"), _name("DefDiamondTrap"), ScavTrap(), FragTrap() 
{
	std::cout << "DiamondTrap default constructor called! Default DiamondTrap " << this->_name << " created." << std::endl;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap constructor called! DiamondTrap " << this->_name << " created." << std::endl;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(DiamondTrap& DT_instance)
{
	*this = DT_instance;
	std::cout << "DiamondTrap Copy constructor called! DiamondTrap " << this->_name << " copied." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called! DiamondTrap " << this->_name << " destroyed." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap& DT_instance)
{
	if (this != &DT_instance)
	{
		this->setName(DT_instance._name);
		this->setHitPoints(DT_instance.getHitPoints());
		this->setEnergyPoints(DT_instance.getEnergyPoints());
		this->setAttackDamage(DT_instance.getAttackDamage());
	}
	return *this;
}

void			DiamondTrap::whoAmI()
{
	std::cout << std::endl;
	std::cout << "                                 ---DiamondTrap WHO AM I" << std::endl;
	std::cout << std::endl;
	if (this->getHitPoints() > 0)
		std::cout << "Am I " << DiamondTrap::_name << "(DiamondTrap->_name) or am I " << ClapTrap::getName() << "(ClapTrap->_name)?" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is out of service!" << std::endl;
}