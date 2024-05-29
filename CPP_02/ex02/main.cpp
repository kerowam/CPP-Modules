/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:28:39 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/29 22:14:45 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );
	//Fixed	c(5.5f);
	//Fixed	d(2);


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	
	/*std::cout << c + d << std::endl;
	std::cout << c - d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;
	
	if (c > d)
		std::cout << ++c << std::endl;
	if (c <= d)
		std::cout << ++c << std::endl;
	if (c == d)
		std::cout << ++c << std::endl;
	if (d < c)
		std::cout << ++d << std::endl;

	if (c != d)
		std::cout << Fixed::min( c, d ) << std::endl;*/
	
	return 0;
}