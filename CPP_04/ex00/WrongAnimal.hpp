/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 00:44:55 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 14:54:48 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(std::string wrong_animal_type);
		WrongAnimal(const WrongAnimal& instance);
		virtual ~WrongAnimal();

		WrongAnimal&		operator=(const WrongAnimal& instance);
		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif