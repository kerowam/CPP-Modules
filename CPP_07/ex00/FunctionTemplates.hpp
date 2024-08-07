/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FunctionTemplates.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:04:08 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 17:50:15 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONTEMPLATES_HPP
# define FUNCTIONTEMPLATES_HPP
# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	aux = a;

	a = b;
	b = aux;
	return ;
}

template <typename T>
T&	min(T& a, T& b)
{
	return (a < b ? a : b);
}

template <typename T>
T&	max(T& a, T& b)
{
	return (a > b ? a : b);
}

#endif