/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:33:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 20:38:57 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const AAnimal*	j = new Dog();
	const AAnimal*	i = new Cat();
	//const AAnimal*	k = new AAnimal();

	std::cout << std::endl;
	delete j;
	delete i;

	return 0;
}