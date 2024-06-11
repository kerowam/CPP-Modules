/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:46:01 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:54:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat& instance)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = instance;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& instance)
{
	if (this != &instance)
		this->type = instance.type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Croack!" << std::endl;
}