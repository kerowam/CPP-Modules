/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:37:43 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat constructed." << std::endl;
	this->_cat_brain = new Brain();
}

Cat::Cat(const Cat& instance)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = instance;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
	delete(this->_cat_brain);
}

Cat&	Cat::operator=(const Cat& instance)
{
	if (this != &instance)
	{
		this->type = instance.type;
		delete(this->_cat_brain);
		this->_cat_brain = new Brain(*instance._cat_brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaauu!" << std::endl;
}