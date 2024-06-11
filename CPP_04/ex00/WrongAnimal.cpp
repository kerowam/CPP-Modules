/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:45:06 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:58:35 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructed." << std::endl;
}

WrongAnimal::WrongAnimal(std::string wrong_animal_type): type(wrong_animal_type)
{
	std::cout << "WrongAnimal " << wrong_animal_type << " constructed." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& instance)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = instance;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal "<< this->type << " destroyed." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

void	WrongAnimal::makeSound() const {}

std::string	WrongAnimal::getType() const
{
	return type;
}