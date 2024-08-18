/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:11:26 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 00:06:09 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Error: argument required." << std::endl;
		return 1;
	}
	std::string	args = argv[1];
	for (int i = 2; i < argc; i++)
	{
		std::string	arg = argv[i];
		args = args + " " + arg;
	}
	//std::cout << args << std::endl;
	PmergeMe	pmerge(args);
	pmerge.sortVector();
	pmerge.sortList();
	std::cout << "After: ";
	pmerge.printVector();
	pmerge.printList();
	pmerge.putTimers();
}