/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:41:57 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/12 14:05:58 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <deque>
# include <iterator>

template <typename T>

class MutantStack: public std::stack<T>
{
	public:
		typedef	typename std::deque<T>::iterator	iterator;
		
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack& mutantStack): std::stack<T>(mutantStack) {}
		virtual ~MutantStack() {}

		MutantStack&	operator=(const MutantStack& mutantStack)
		{
			std::stack<T>::operator=(mutantStack);
			return *this;
		}

		iterator	begin()
		{
			return this->c.begin();
		}

		iterator	end()
		{
			return this->c.end();
		}
};

#endif