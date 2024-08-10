/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:26:03 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 18:06:51 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template <typename T>

typename T::iterator	easyfind(T& container, int nbrToFind)
{
	typename T::iterator	it = std::find(container.begin(), container.end(), nbrToFind);
	return it;
}

#endif