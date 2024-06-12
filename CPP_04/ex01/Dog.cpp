/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:35:04 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:39:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog constructed." << std::endl;
	this->_dog_brain = new Brain();
}

Dog::Dog(const Dog& instance)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = instance;
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
	delete(this->_dog_brain);
}

Dog&	Dog::operator=(const Dog& instance)
{
	if (this != &instance)
	{
		this->type = instance.type;
		delete(this->_dog_brain);
		this->_dog_brain = new Brain(*instance._dog_brain);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Grrrrrrr GUAU!" << std::endl;
}