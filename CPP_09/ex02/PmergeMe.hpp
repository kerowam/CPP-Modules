/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:12:28 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 01:29:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <limits>
# include <sys/time.h>
# include <iomanip>
# include <iterator>

class PmergeMe
{
	private:
		std::string			_args;
		std::vector<int>	_vector;
		std::list<int>		_list;
		double				_vectorTime;
		double				_listTime;

		PmergeMe();
	public:
		~PmergeMe();
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe(std::string args);

		PmergeMe&	operator=(const PmergeMe& pmerge);
		
		void	printVector();
		void	printList();
		void	sortVector();
		void	sortList();
		void	putTimers();
};

#endif