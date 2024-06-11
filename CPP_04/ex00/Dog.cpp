/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:35:04 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:14:48 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Default Dog constructed." << std::endl;
}

Dog::Dog(const Dog& instance)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = instance;
}

Dog::~Dog()
{
	std::cout << "Cat destroyed." << std::endl;
}

Dog&	Dog::operator=(const Dog& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Grrrrrrr GUAU!" << std::endl;
}