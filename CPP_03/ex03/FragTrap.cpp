/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 01:00:25 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 01:22:14 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called! Default FragTrap " << this->getName() << " created." << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called! FragTrap " << this->getName() << " created." << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap& FT_instance)
{
	*this = FT_instance;
	std::cout << "FragTrap Copy constructor called! FragTrap " << this->getName() << " copied." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called! FragTrap " << this->getName() << " destroyed." << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap& FT_instance)
{
	if (this != &FT_instance)
	{
		this->setName(FT_instance.getName());
		this->setHitPoints(FT_instance.getHitPoints());
		this->setEnergyPoints(FT_instance.getEnergyPoints());
		this->setAttackDamage(FT_instance.getAttackDamage());
	}
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << std::endl;
	std::cout << "                                 ---FragTrap HIGH FIVES GUYS!---" << std::endl;
	std::cout << std::endl;
	if (this->getHitPoints() > 0)
		std::cout << "FragTrap " << this->getName() << " high fives!" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is out of service!" << std::endl;
}