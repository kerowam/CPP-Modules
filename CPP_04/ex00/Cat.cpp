/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:14:25 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Default Cat constructed." << std::endl;
}

Cat::Cat(const Cat& instance)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = instance;
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}

Cat&	Cat::operator=(const Cat& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miaaaauu!" << std::endl;
}