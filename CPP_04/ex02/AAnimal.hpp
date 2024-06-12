/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:07 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 20:31:11 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	private:

	protected:
		std::string	type;

	public:
		AAnimal();
		AAnimal(std::string animal_type);
		AAnimal(const AAnimal& instance);
		virtual ~AAnimal();

		AAnimal&			operator=(const AAnimal& instance);
		virtual void	makeSound() const = 0;
		std::string		getType() const;
};

#endif