/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:26:23 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 18:28:13 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>			v;
	std::vector<int>::iterator	v_it;
	std::list<int>		l;
	std::list<int>::iterator	l_it;
	int					nbr = -8;

	for(int i = 1; i <= 15; i++)
	{
		v.push_back(nbr + i);
		l.push_back(i + i);
	}

	std::cout << "vector:" << std::endl;
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	std::cout << "list:" << std::endl;
	for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it)
		std::cout << *it << std::endl;
	std::cout << std::endl;

	v_it = easyfind(v, -7);
	l_it = easyfind(l, -7);

	std::cout << "Searching -7:" << std::endl;
	if(v_it == v.end())
		std::cout << "v_it: number not found!" << std::endl;
	else
		std::cout << "v_it: " << *v_it << std::endl;

	if(l_it == l.end())
		std::cout << "l_it: number not found!" << std::endl;
	else
		std::cout << "l_it: " << *l_it << std::endl;
	std::cout << std::endl;

	v_it = easyfind(v, 8);
	l_it = easyfind(l, 8);

	std::cout << "Searching 8:" << std::endl;
	if(v_it == v.end())
		std::cout << "v_it: number not found!" << std::endl;
	else
		std::cout << "v_it: " << *v_it << std::endl;

	if(l_it == l.end())
		std::cout << "l_it: number not found!" << std::endl;
	else
		std::cout << "l_it: " << *l_it << std::endl;
	std::cout << std::endl;

	v_it = easyfind(v, 4);
	l_it = easyfind(l, 4);

	std::cout << "Searching 4:" << std::endl;
	if(v_it == v.end())
		std::cout << "v_it: number not found!" << std::endl;
	else
		std::cout << "v_it: " << *v_it << std::endl;

	if(l_it == l.end())
		std::cout << "l_it: number not found!" << std::endl;
	else
		std::cout << "l_it: " << *l_it << std::endl;
	std::cout << std::endl;

	v_it = easyfind(v, 42);
	l_it = easyfind(l, 42);

	std::cout << "Searching 42:" << std::endl;
	if(v_it == v.end())
		std::cout << "v_it: number not found!" << std::endl;
	else
		std::cout << "v_it: " << *v_it << std::endl;

	if(l_it == l.end())
		std::cout << "l_it: number not found!" << std::endl;
	else
		std::cout << "l_it: " << *l_it << std::endl;
	std::cout << std::endl;
}