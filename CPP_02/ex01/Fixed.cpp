/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:07:09 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/28 02:20:10 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	
	this->_fixed_point = 0;
}		

Fixed::Fixed(const Fixed& fixed_instance)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = fixed_instance;
}

Fixed::Fixed(const int nbr)
{

}
Fixed::Fixed(const float nbr)
{

}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
	
const Fixed& Fixed::operator=(const Fixed& fixed_instance)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &fixed_instance)
		this->_fixed_point = fixed_instance.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

int		Fixed::toInt(void) const
{

}

float	Fixed::toFloat(void) const
{

}