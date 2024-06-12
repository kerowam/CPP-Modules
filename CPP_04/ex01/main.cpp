/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:33:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 19:49:10 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;

	const Animal*	animals[6] = {new Cat(), new Cat(), new Dog(), new Dog(), new Cat(), new Dog()};

	for (int k = 0; k < 6; k++)
		delete (animals[k]);
	return 0;
}