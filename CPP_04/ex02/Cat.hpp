/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:34:33 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 20:34:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain*	_cat_brain;

	public:
		Cat();
		Cat(const Cat& instance);
		~Cat();

		Cat&	operator=(const Cat& instance);
		void	makeSound() const;
};

#endif