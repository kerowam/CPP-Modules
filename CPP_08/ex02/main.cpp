/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:41:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/12 14:40:53 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "--subject's test--" << std::endl;
	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(-5);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "--My test--" << std::endl;
	std::cout << "s.top(): " << s.top() << std::endl;
	s.pop();
	std::cout << "s.top() after s.pop(): " << s.top() << std::endl << std::endl;
	
	MutantStack<int> s_mutant(mstack);
	MutantStack<int>::iterator s_it = s_mutant.begin();
	while (s_it != s_mutant.end())
	{
		std::cout << *s_it << std::endl;
		++s_it;
	}
	
	std::cout << "Now with list:" << std::endl;
	std::list<int>	mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << "back: " << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << "size: " << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(42);
	mlist.push_back(-5);
	mlist.push_back(0);

	std::list<int>::iterator l_it = mlist.begin();
	std::list<int>::iterator l_ite = mlist.end();

	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
		std::cout << *l_it << std::endl;
		++l_it;
	}
	std::list<int> s_list(mlist);
	return 0;
}