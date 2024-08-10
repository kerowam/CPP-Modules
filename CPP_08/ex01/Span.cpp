/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:54:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 23:31:04 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int N)
{
	_array.reserve(N);
}

Span::Span(const Span& span): _array(span._array)
{
	*this = span;
}

Span::~Span() {}

Span&	Span::operator=(const Span& span)
{
	if (this != &span)
	{
		this->_array = span._array;
	}
	return *this;
}

void	Span::addNumber(int nbr)
{
	if (_array.size() >= _array.capacity())
		throw Span::FullArray();
	else
		_array.push_back(nbr);
}

unsigned int		Span::shortestSpan()
{
	if (_array.size() <= 1)
		throw Span::InsufficientNumbers();
	Span	temp(*this);
	std::sort(temp._array.begin(), temp._array.end());
	unsigned int	shortest_span = *(temp._array.begin() + 1) - *(temp._array.begin());
	for (unsigned int i = 2; i < temp._array.size(); i++)
	{
		if (shortest_span == 0)
			return 0;
		if (temp._array[i] - temp._array[i - 1] < shortest_span)
			shortest_span = temp._array[i] - temp._array[i - 1];
	}
	return (shortest_span);
}

unsigned int		Span::longestSpan()
{
	if (_array.size() <= 1)
		throw Span::InsufficientNumbers();

	unsigned int	longest_span = *std::max_element(this->_array.begin(), this->_array.end()) 
									- *std::min_element(this->_array.begin(), this->_array.end());
	return longest_span;
}

const char*	Span::FullArray::what()const throw()
{
	return "Full array. There's no space for another number.";
}

const char*	Span::InsufficientNumbers::what()const throw()
{
	return "Span can't be calculated. Insufficient numbers in array.";
}