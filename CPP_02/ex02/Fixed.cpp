/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:27:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/29 20:52:59 by gfredes-         ###   ########.fr       */
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
	std::cout << "Int constructor called" << std::endl;
	_fixed_point = nbr << _fract_bits;
}
Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point = roundf(nbr * (1 << _fract_bits));
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
	//std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point = raw;
}

int		Fixed::toInt(void) const
{
	return (_fixed_point >> _fract_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixed_point / (1 << _fract_bits));
}

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed_instance)
{
	outstream << fixed_instance.toFloat();
	return (outstream);
}

bool	Fixed::operator>(const Fixed& instance) const
{

}

bool	Fixed::operator<(const Fixed& instance) const
{

}

bool	Fixed::operator>=(const Fixed& instance) const
{

}

bool	Fixed::operator<=(const Fixed& instance) const
{

}

bool	Fixed::operator==(const Fixed& instance) const
{

}

bool	Fixed::operator!=(const Fixed& instance) const
{

}

Fixed	Fixed::operator+(const Fixed& instance) const
{

}

Fixed	Fixed::operator-(const Fixed& instance) const
{

}

Fixed	Fixed::operator*(const Fixed& instance) const
{

}

Fixed	Fixed::operator/(const Fixed& instance) const
{

}

const Fixed&	Fixed::operator++()
{

}

const Fixed		Fixed::operator++(int)
{

}

const Fixed&	Fixed::operator--()
{

}

const Fixed		Fixed::operator--(int)
{

}

Fixed&		Fixed::min(Fixed& a, Fixed& b)
{

}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{

}

Fixed&		Fixed::max(Fixed& a, Fixed& b)
{

}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{

}