/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:11:26 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 01:26:08 by gfredes-         ###   ########.fr       */
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
	PmergeMe	pmerge(args);
	std::cout << "Before: ";
	pmerge.printVector();
	//pmerge.printList();
	//std::cout << "With vector:" << std::endl;
	pmerge.sortVector();
	//std::cout << "With list:" << std::endl;
	pmerge.sortList();
	std::cout << "After: ";
	pmerge.printVector();
	//pmerge.printList();
	pmerge.putTimers();
}