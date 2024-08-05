/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:10:40 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/05 14:21:30 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments." << std::endl;
		std::cout << "Usage: ./conversion <argument>" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}