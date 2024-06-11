/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:33 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 00:15:07 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& instance);
		~Cat();

		Cat&	operator=(const Cat& instance);
		void	makeSound() const;
};

#endif