/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:51:24 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 22:42:56 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <exception>
# include "Array.tpp"

template <typename T>

class Array
{
	private:
		T* 				_array;
		unsigned int	_size;
		
	public:
		Array();
		/*{
			this->_size = 0;
			this->_array = new T[0];
		}*/

		Array(unsigned int n);
		/*{
			this->_array = new T[n];
		}*/

		Array(const Array& array);
		/*{
			this->_array = new T[array.size()];
			this->_size = array->size();
			for(unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = array[i];
		}*/

		~Array();
		/*{
			if (this->_array)
				delete[](this->_array);
		}*/

		Array&			operator=(const Array& array);
		/*{
			if (this != &array)
			{
				delete[](this->_array);
				this->_size = array.size();
				this->_array = new T[this->_size];
				for(unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = array[i];
			}
			return *this;
		}*/

		T&				operator[](const unsigned int i);
		/*{
			if(i > (this->_size - 1))
				throw Array<T>::OutOfBoundsException();
			return this->_array[i];
		}*/

		unsigned int	size();
		/*{
			return this->_size;
		}*/

		class OutOfBoundsException: public std::exception
		{
			public:
				const char* what()const throw();
				/*{
					return "Index is out of bounds!";
				}*/
		};

};

#endif