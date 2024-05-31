/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:38:25 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/31 17:44:47 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point	a(1, 2);
	Point	b(2, 0);
	Point	c(0, 0);
	Point	p1(1, 1);
	Point	p2(2, 1);
	Point	p3(1, 0);
	
	std::cout << "The three points of the triangle are: a" << a << ", b" << b << ", c" << c << std::endl;
	std::cout << "It's the point p1" << p1 << " inside the triangle?" << std::endl;
	if (bsp(a, b, c, p1))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << "It's the point p2" << p2 << " inside the triangle?" << std::endl;
	if (bsp(a, b, c, p2))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	std::cout << "It's the point p3" << p3 << " inside the triangle?" << std::endl;
	if (bsp(a, b, c, p3))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	
	return 0;
}