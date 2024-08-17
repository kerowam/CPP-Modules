/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:51:24 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 15:04:17 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>

template <typename T>

class Array
{
	private:
		T* 				_array;
		unsigned int	_size;
		
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& array);
		~Array();
		Array&			operator=(const Array& array);
		T&				operator[](const unsigned int i)const;
		unsigned int	size() const;
		class OutOfBoundsException: public std::exception
		{
			public:
				const char* what()const throw();
		};

};
# include "Array.tpp"

#endif