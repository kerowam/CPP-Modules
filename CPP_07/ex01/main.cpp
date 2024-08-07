/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:02:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 18:38:57 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(T& x)
{
	std::cout << x << std::endl;
}

int	main(void)
{
	std::string	str_array[4] = {"string 1", "string 2", "string 3", "string 4"};
	int			int_array[4] = {-42, 0, 42, 175};
	float		float_array[4] = {-24.42f, 0.0f, 42.02f, 124.24f};
	double		double_array[4] = {-32.42, 0.01, 2.42, 42.42};
	char		char_array[5] = "abcd";

	size_t str_length = sizeof(str_array) / sizeof(std::string);
	size_t int_length = sizeof(int_array) / sizeof(int);
	size_t float_length = sizeof(float_array) / sizeof(float);
	size_t double_length = sizeof(double_array) / sizeof(double);
	size_t char_length = sizeof(char_array) / sizeof(char);

	::iter<std::string>(str_array, str_length, print);
	std::cout << std::endl;
	::iter<int>(int_array, int_length, print);
	std::cout << std::endl;
	::iter<float>(float_array, float_length, print);
	std::cout << std::endl;
	::iter<double>(double_array, double_length, print);
	std::cout << std::endl;
	::iter<char>(char_array, char_length, print);
}