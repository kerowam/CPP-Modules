/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:00:54 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 18:36:49 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T* array, size_t length, void(*function)(T&))
{
	if (array && *function != NULL)
	{
		for (int i = 0; i < length; i++)
			function(array[i]);
	}
}

#endif