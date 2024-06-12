/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:55 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 20:34:14 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain*	_dog_brain;

	public:
		Dog();
		Dog(const Dog& instance);
		~Dog();

		Dog&	operator=(const Dog& instance);
		void	makeSound() const;
};

#endif