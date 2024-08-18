/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:11:59 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/18 23:15:41 by gfredes-         ###   ########.fr       */
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

	//std::cout << "Init vectorMerge" << std::endl;
	while(leftIt != leftVector.end() && rightIt != rightVector.end())
	{
		//std::cout << "leftIt: " << *leftIt << std::endl;
		//std::cout << "rightIt: " << *rightIt << std::endl;
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
		//std::cout << "vIt: " << *vIt << std::endl;
		vIt++;
	}
	while (leftIt != leftVector.end())
	{
		*vIt = *leftIt;
		//std::cout << "vIt: " << *vIt << std::endl;
		vIt++;
		leftIt++;
	}
	while (rightIt != rightVector.end())
	{
		*vIt = *rightIt;
		//std::cout << "vIt: " << *vIt << std::endl;
		vIt++;
		rightIt++;
	}
	//std::cout << "End vectorMerge" << std::endl;
}

static void	vectorMergeInsertSort(std::vector<int>& v)
{
	if(v.size() < 2)
		return ;

	int					middle = v.size() / 2;
	std::vector<int>	leftVector(v.begin(), v.begin() + middle);
	std::vector<int>	rightVector(v.begin() + middle, v.end());

	//printVector(leftVector);
	vectorMergeInsertSort(leftVector);
	//printVector(rightVector);
	vectorMergeInsertSort(rightVector);
	vectorMerge(v, leftVector, rightVector);
}

void	PmergeMe::sortVector()
{
	struct timeval	startTime;
	struct timeval	endTime;
	
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
	std::cout << "Before: ";
	printVector();
	vectorMergeInsertSort(_vector);
	gettimeofday(&endTime, NULL);
	//std::cout << "After: ";
	//printVector(_vector);
	_vectorTime = (endTime.tv_sec - startTime.tv_sec) * 1000000 + (endTime.tv_usec - startTime.tv_usec);
}

void	PmergeMe::sortList()
{
	struct timeval	startTime;
	struct timeval	endTime;
	
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
}

void	PmergeMe::putTimers()
{
	std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector " << _vectorTime << " us" << std::endl;
}