/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 02:07:18 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/29 19:47:02 by gfredes-         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed_instance);

#endif