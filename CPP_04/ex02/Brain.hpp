/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:10:16 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:17:10 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
# define	BRAIN_HPP
# include	<iostream>

class	Brain
{
	public:
		Brain();
		Brain(Brain& instance);
		~Brain();

		Brain&	operator=(Brain& instance);
		std::string	ideas[100];
};

#endif