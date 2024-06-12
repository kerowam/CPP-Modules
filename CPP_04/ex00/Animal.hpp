/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:07 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 14:53:50 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	private:

	protected:
		std::string	type;

	public:
		Animal();
		Animal(std::string animal_type);
		Animal(const Animal& instance);
		virtual ~Animal();

		Animal&			operator=(const Animal& instance);
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif