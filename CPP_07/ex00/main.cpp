/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:02:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 17:55:52 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FunctionTemplates.hpp"

int	main(void)
{
	std::string	str1 =  "string 1";
	std::string	str2 =  "string 2";

	std::cout << "--- Whit stings ---" << std::endl;
	std::cout << "str1: " << str1 << ";\tstr2: " << str2 << std::endl;

	::swap(str1, str2);

	std::cout << "--- swap ---" << std::endl;
	std::cout << "str1: " << str1 << ";\tstr2: " << str2 << std::endl;
	std::cout << "--- min, max ---" << std::endl;
	std::cout << "min: " << min<std::string>(str1, str2) << std::endl;
	std::cout << "max: " << max<std::string>(str1, str2) << std::endl;
	std::cout << std::endl;

	int	a = 42;
	int	b = -42;

	std::cout << "--- Whit integers ---" << std::endl;
	std::cout << "a: " << a << ";\tb: " << b << std::endl;

	::swap(a, b);

	std::cout << "--- swap ---" << std::endl;
	std::cout << "a: " << a << ";\tb: " << b << std::endl;
	std::cout << "--- min, max ---" << std::endl;
	std::cout << "min: " << min<int>(a, b) << std::endl;
	std::cout << "max: " << max<int>(a, b) << std::endl;
	std::cout << std::endl;

	float	c = 42.42f;
	float	d = -42.42f;

	std::cout << "--- Whit floats ---" << std::endl;
	std::cout << "c: " << c << ";\td: " << d << std::endl;

	::swap(c, d);

	std::cout << "--- swap ---" << std::endl;
	std::cout << "c: " << c << ";\td: " << d << std::endl;
	std::cout << "--- min, max ---" << std::endl;
	std::cout << "min: " << min<float>(c, d) << std::endl;
	std::cout << "max: " << max<float>(c, d) << std::endl;
	std::cout << std::endl;

	double	e = 42.42;
	double	f = 42.02;

	std::cout << "--- Whit doubles ---" << std::endl;
	std::cout << "e: " << e << ";\tf: " << f << std::endl;

	::swap(e, f);

	std::cout << "--- swap ---" << std::endl;
	std::cout << "e: " << e << ";\tf: " << f << std::endl;
	std::cout << "--- min, max ---" << std::endl;
	std::cout << "min: " << min<double>(e, f) << std::endl;
	std::cout << "max: " << max<double>(e, f) << std::endl;
	std::cout << std::endl;

	char	g = 'g';
	char	h = 'h';

	std::cout << "--- Whit characters ---" << std::endl;
	std::cout << "g: " << g << ";\th: " << h << std::endl;

	::swap(g, h);

	std::cout << "--- swap ---" << std::endl;
	std::cout << "g: " << g << ";\th: " << h << std::endl;
	std::cout << "--- min, max ---" << std::endl;
	std::cout << "min: " << min<char>(g, h) << std::endl;
	std::cout << "max: " << max<char>(g, h) << std::endl;
	std::cout << std::endl;

	return 0;
}