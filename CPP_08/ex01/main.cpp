/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:53:37 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 23:31:19 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		Span array_1(3);

		array_1.addNumber(-4);

		//std::cout << "shortest span: " << array_1.shortestSpan() << std::endl;
		//std::cout << "longest span: " << array_1.longestSpan() << std::endl;

		array_1.addNumber(2);
		array_1.addNumber(38);

		std::cout << "shortest span: " << array_1.shortestSpan() << std::endl;
		std::cout << "longest span: " << array_1.longestSpan() << std::endl;

		array_1.addNumber(122);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Span array_2(150000);
		std::srand(time(NULL));
		for (int i = 0; i < 150000; i++)
			array_2.addNumber(rand());

		std::cout << "shortest span: " << array_2.shortestSpan() << std::endl;
		std::cout << "longest span: " << array_2.longestSpan() << std::endl;
		//std::cout << "array size: " << array_2._array.size() << std::endl;
		//std::cout << "array[9999]: 0" << array_2._array[9999] << std::endl;
		//std::cout << "array[14999]: 0" << array_2._array[14999] << std::endl;

		array_2.addNumber(122);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}