/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:22 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 20:33:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Default AAnimal constructed." << std::endl;
}

AAnimal::AAnimal(std::string animal_type): type(animal_type)
{
	std::cout << "AAnimal " << animal_type << " constructed." << std::endl;
}

AAnimal::AAnimal(const AAnimal& instance)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = instance;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal "<< this->type << " destroyed." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

std::string	AAnimal::getType() const
{
	return type;
}