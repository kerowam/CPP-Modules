/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:55:58 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 19:59:17 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong arguments." << std::endl;
		std::cerr << "Usage: ./RPN <inverted Polish mathematical expression>" << std::endl;
		return 1;
	}
	RPN rpn(argv[1]);
	rpn.calculate();
	return 0;
}