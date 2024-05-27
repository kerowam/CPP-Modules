/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 01:09:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/28 01:26:30 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class	Fixed
{
	private:
		int					_fixed_point;
		static const int	_fract_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed& fixed_name);
		~Fixed();
		const Fixed& operator=(const Fixed& fixed_name);

		int		getRawBits(void);
		void	setRawBits(int const raw);

};

#endif