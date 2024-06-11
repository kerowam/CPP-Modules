/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:22 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:14:06 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default Animal constructed." << std::endl;
}

Animal::Animal(std::string animal_type): type(animal_type)
{
	std::cout << "Animal " << animal_type << " constructed." << std::endl;
}

Animal::Animal(const Animal& instance)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = instance;
}

Animal::~Animal()
{
	std::cout << "Animal "<< this->type << " destroyed." << std::endl;
}

Animal&	Animal::operator=(const Animal& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

void	Animal::makeSound() const {}

std::string	Animal::getType() const
{
	return type;
}