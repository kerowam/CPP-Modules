/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:12:28 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/18 15:10:45 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>

class PmergeMe
{
	private:
		std::string			_args;
		std::vector<int>	_vector;
		std::list<int>		_list;

		PmergeMe();
	
	public:
		~PmergeMe();
		PmergeMe(const PmergeMe& pmerge);
		PmergeMe(std::string args);

		PmergeMe&	operator=(const PmergeMe& pmerge);
		
		void	print(std::vector<int> &_vector);
		void	print(std::list<int> &_list);
		void	sort(std::vector<int> &_vector);
		void	sort(std::list<int> &_list);
		void	getTime(std::vector<int> &_vector);
		void	getTime(std::list<int> &_list);

};

#endif