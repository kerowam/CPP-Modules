/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:28:05 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/29 20:45:44 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_fixed_point;
		static const int	_fract_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed& fixed_instance);
		~Fixed();
		const Fixed& operator=(const Fixed& fixed_instance);
		Fixed(const int nbr);
		Fixed(const float nbr);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		bool	operator>(const Fixed& instance) const;
		bool	operator<(const Fixed& instance) const;
		bool	operator>=(const Fixed& instance) const;
		bool	operator<=(const Fixed& instance) const;
		bool	operator==(const Fixed& instance) const;
		bool	operator!=(const Fixed& instance) const;

		Fixed	operator+(const Fixed& instance) const;
		Fixed	operator-(const Fixed& instance) const;
		Fixed	operator*(const Fixed& instance) const;
		Fixed	operator/(const Fixed& instance) const;

		const Fixed&	operator++();
		const Fixed		operator++(int);
		const Fixed&	operator--();
		const Fixed		operator--(int);

		static Fixed&		min(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed_instance);

#endif