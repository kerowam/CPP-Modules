/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 19:01:42 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 22:06:40 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->_size = 0;
	this->_array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array& array)
{
	this->_size = array.size();
	this->_array = new T[this->_size];
	for(unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = array[i];
}

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete[](this->array);
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& array)
{
	if (this != &array)
	{
		delete[](this->_array);
		this->_size = array.size();
		this->_array = new T[this->_size];
		for(unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = array[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](const unsigned int i)
{
	if(i > (this->_size - 1))
		throw Array<T>::OutOfBoundsException();
	return this->_array[i];
}

template <typename T>
unsigned int	Array<T>::size()
{
	return this->_size;
}

template <typename T>
const char*	Array<T>::OutOfBoundsException::what()const throw()
{
	return "Index is out of bounds!";
}