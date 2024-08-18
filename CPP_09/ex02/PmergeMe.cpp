/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:11:59 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 01:27:15 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& pmerge)
{
	*this = pmerge;
}

PmergeMe::PmergeMe(std::string args): _args(args)
{
	for (int i = 0; args[i]; i++)
	{
		if (args[i] == ' ')
			continue ;
		else if (args[i] != ' ' && !isdigit(args[i]))
		{
			std::cerr << "Error: invalid args. Only positive integers allowed." << std::endl;
			exit(1);
		}
		else
		{
			int		length = 0;
			long	nbr;

			while (args[i] >= '0' && args[i] <= '9')
			{
				length++;
				i++;
			}
			nbr = std::atol(args.substr(i - length, length).c_str());
			if (nbr > std::numeric_limits<int>::max())
			{
				std::cerr << "Error: invalid args. Number greater than maximum integer." << std::endl;
				exit(1);
			}
			_vector.push_back(nbr);
			_list.push_back(nbr);
			if(!args[i])
				break ;
		}
	}
}

PmergeMe&	PmergeMe::operator=(const PmergeMe& pmerge)
{
	if (this != &pmerge)
	{
		_args = pmerge._args;
		_vector = pmerge._vector;
		_list = pmerge._list;
	}
	return *this;
}

void	PmergeMe::printVector()
{
	for(std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::printList()
{
	for(std::list<int>::iterator it = _list.begin(); it != _list.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

static void	vectorMerge(std::vector<int>& v, std::vector<int>& leftVector, std::vector<int>& rightVector)
{
	std::vector<int>::iterator	vIt = v.begin();
	std::vector<int>::iterator	leftIt = leftVector.begin();
	std::vector<int>::iterator	rightIt = rightVector.begin();

	while(leftIt != leftVector.end() && rightIt != rightVector.end())
	{
		if (*leftIt < *rightIt)
		{
			*vIt = *leftIt;
			leftIt++;
		}
		else
		{
			*vIt = *rightIt;
			rightIt++;
		}
		vIt++;
	}
	while (leftIt != leftVector.end())
	{
		*vIt = *leftIt;
		vIt++;
		leftIt++;
	}
	while (rightIt != rightVector.end())
	{
		*vIt = *rightIt;
		vIt++;
		rightIt++;
	}
}

static void	vectorMergeInsertSort(std::vector<int>& v)
{
	if(v.size() < 2)
		return ;

	int					middle = v.size() / 2;
	std::vector<int>	leftVector(v.begin(), v.begin() + middle);
	std::vector<int>	rightVector(v.begin() + middle, v.end());

	vectorMergeInsertSort(leftVector);
	vectorMergeInsertSort(rightVector);
	vectorMerge(v, leftVector, rightVector);
}

void	PmergeMe::sortVector()
{
	struct timeval	startTime;
	struct timeval	endTime;
	
	_vector.clear();
	gettimeofday(&startTime, NULL);
	for (int i = 0; _args[i]; i++)
	{
		if (_args[i] == ' ')
			continue ;
		else
		{
			int		length = 0;
			long	nbr;

			while (_args[i] >= '0' && _args[i] <= '9')
			{
				length++;
				i++;
			}
			nbr = std::atol(_args.substr(i - length, length).c_str());
			_vector.push_back(nbr);
			if(!_args[i])
				break ;
		}
	}
	//std::cout << "Before: ";
	//printVector();
	vectorMergeInsertSort(_vector);
	gettimeofday(&endTime, NULL);
	//std::cout << "After: ";
	//printVector();
	_vectorTime = (endTime.tv_sec - startTime.tv_sec) * 1000000 + (endTime.tv_usec - startTime.tv_usec);
}

static void	listMerge(std::list<int>& l, std::list<int>& leftList, std::list<int>& rightList)
{
	std::list<int>::iterator	lIt = l.begin();
	std::list<int>::iterator	leftIt = leftList.begin();
	std::list<int>::iterator	rightIt = rightList.begin();

	while(leftIt != leftList.end() && rightIt != rightList.end())
	{
		if (*leftIt < *rightIt)
		{
			*lIt = *leftIt;
			leftIt++;
		}
		else
		{
			*lIt = *rightIt;
			rightIt++;
		}
		lIt++;
	}
	while (leftIt != leftList.end())
	{
		*lIt = *leftIt;
		lIt++;
		leftIt++;
	}
	while (rightIt != rightList.end())
	{
		*lIt = *rightIt;
		lIt++;
		rightIt++;
	}
}

static void	listMergeInsertSort(std::list<int>& l)
{
	if(l.size() < 2)
		return ;

	int							middle = l.size() / 2;
	std::list<int>::iterator	lIt = l.begin();

	std::advance(lIt, middle);
	
	std::list<int>	leftList(l.begin(), lIt);
	std::list<int>	rightList(lIt, l.end());

	listMergeInsertSort(leftList);
	listMergeInsertSort(rightList);
	listMerge(l, leftList, rightList);
}

void	PmergeMe::sortList()
{
	struct timeval	startTime;
	struct timeval	endTime;
	
	_list.clear();
	gettimeofday(&startTime, NULL);
	for (int i = 0; _args[i]; i++)
	{
		if (_args[i] == ' ')
			continue ;
		else
		{
			int		length = 0;
			long	nbr;

			while (_args[i] >= '0' && _args[i] <= '9')
			{
				length++;
				i++;
			}
			nbr = std::atol(_args.substr(i - length, length).c_str());
			_list.push_back(nbr);
			if(!_args[i])
				break ;
		}
	}
	//std::cout << "Before: ";
	//printList();
	listMergeInsertSort(_list);
	gettimeofday(&endTime, NULL);
	//std::cout << "After: ";
	//printList();
	_listTime = (endTime.tv_sec - startTime.tv_sec) * 1000000 + (endTime.tv_usec - startTime.tv_usec);
}

void	PmergeMe::putTimers()
{
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector " << _vectorTime << " us" << std::endl;
	std::cout << "Time to process a range of " << _list.size() << " elements with std::list " << _listTime << " us" << std::endl;
}