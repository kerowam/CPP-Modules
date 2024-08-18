/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:12:28 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 00:34:51 by gfredes-         ###   ########.fr       */
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
		//void	vectorMergeInsertSort(std::vector<int>& v);
		//void	vectorMerge(std::vector<int>& v, std::vector<int>& leftVector, std::vector<int>& rightVector);
	public:
		~PmergeMe();
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe(std::string args);

		PmergeMe&	operator=(const PmergeMe& pmerge);
		
		//void	printVector(std::vector<int>& _vector);
		void	printVector();
		void	printList();
		//void	sort(std::vector<int> &_vector);
		void	sortVector();
		//void	sort(std::list<int> &_list);
		void	sortList();
		void	putTimers();
};

#endif