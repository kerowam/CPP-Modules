/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:55 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:21:56 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_dog_brain;

	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog& instance);
		~Dog();

		Dog&	operator=(const Dog& instance);
		void	makeSound() const;
};

#endif