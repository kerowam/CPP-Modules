/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 23:41:57 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 23:56:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>

class MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack& mutantStack);
		~MutantStack();

		MutantStack&	operator=(const MutantStack& mutantStack);
}

#endif