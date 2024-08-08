/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:02:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/08 14:29:06 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	empty_int_array;
	Array<std::string>	empty_str_array;

	std::cout << "Expected size of empty_int_array: 0; Got: " << empty_int_array.size() << std::endl;
	std::cout << "Expected size of empty_str_array: 0; Got: " << empty_str_array.size() << std::endl;

	int		*a = new int();
	char	*b = new char();

	std::cout << "*a: " << *a << std::endl;
	std::cout << "*b: " << *b << std::endl;

	unsigned int	n = 15;
	char			c = 'a';
	Array<int>				int_array(n);
	Array<std::string>		str_array(n);
	
	std::cout << "Expected size of int_array: " << n << ", Got: " << int_array.size() << std::endl;
	std::cout << "Expected size of char_array: " << n << ", Got: " << str_array.size() << std::endl;
	for (unsigned int i = 0; i < n; i++)
	{
		std::cout << "Element at index " << i << " is " << int_array[i] <<std::endl;
		std::cout << "Element at index " << i << " is " << str_array[i] <<std::endl;
	}
	for (unsigned int i = 0; i < n; i++)
	{
		int_array[i] = i + 1;
		str_array[i] = c++;
	}
	Array<int>			int_array_copy(int_array);
	Array<std::string>	str_array_copy(str_array);

	std::cout << "Size of int_array: " << int_array.size() << ", size of int_array_copy: " << int_array_copy.size() << std::endl;
	std::cout << "Size of str_array: " << str_array.size() << ", size of str_array_copy: " << str_array_copy.size() << std::endl;
	std::cout << "int_array[5]: " << int_array[5] << ", int_array_copy[5]: " << int_array_copy[5] << std::endl;
	std::cout << "str_array[5]: " << str_array[5] << ", str_array_copy[5]: " << str_array_copy[5] << std::endl;

	Array<int>	int_array_copy_2;
	int_array_copy_2 = int_array;
	Array<std::string>	str_array_copy_2;
	str_array_copy_2 = str_array;

	std::cout << "Size of int_array: " << int_array.size() << ", size of int_array_copy_2: " << int_array_copy_2.size() << std::endl;
	std::cout << "Size of str_array: " << str_array.size() << ", size of str_array_copy_2: " << str_array_copy_2.size() << std::endl;
	std::cout << "int_array[7]: " << int_array[7] << ", int_array_copy_2[7]: " << int_array_copy_2[7] << std::endl;
	std::cout << "str_array[7]: " << str_array[7] << ", str_array_copy_2[7]: " << str_array_copy_2[7] << std::endl;

	try
	{
		int_array[-2] = 1;
	}
	catch (const std::exception& e)
	{
		std::cerr << "int_array[-2] " << e.what() << std::endl;
	}
	try
	{
		int_array[42] = 1;
	}
	catch (const std::exception& e)
	{
		std::cerr << "int_array[42] " << e.what() << std::endl;
	}

	try
	{
		str_array[-2] = 1;
	}
	catch (const std::exception& e)
	{
		std::cerr << "str_array[-2] " << e.what() << std::endl;
	}

	try
	{
		str_array[42] = 1;
	}
	catch (const std::exception& e)
	{
		std::cerr << "str_array[42] " << e.what() << std::endl;
	}
}