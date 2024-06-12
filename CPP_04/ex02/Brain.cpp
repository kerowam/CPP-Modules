/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 19:10:08 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:30:59 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain constructed" << std::endl;
}

Brain::Brain(Brain& instance)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = instance;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain&	Brain::operator=(Brain& instance)
{
	if (this != &instance)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = instance.ideas[i];
	}
	return *this;
}