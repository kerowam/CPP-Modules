/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 02:33:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 14:42:18 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();

	std::cout << "		--- SUBJECT TEST ---" << std::endl;
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "		--- TEST WITH WRONG ANIMAL AND WRONG CAT ---" << std::endl;
	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wrong_meta->makeSound();
	std::cout << std::endl;

	delete(meta);
	delete(j);
	delete(i);
	delete(wrong_meta);
	delete(k);
	return 0;
}