/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:10:40 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/07 18:11:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	Base	*base;
	int		random_nbr;

	srand(time(NULL));
	random_nbr = rand() % 3;
	switch(random_nbr)
	{
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
	}
	return base;
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The type of the object pointed is: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The type of the object pointed is: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The type of the object pointed is: C" << std::endl;
	else
		std::cout << "Error: type doesn't found!" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "The type of the object referenced is: A" << std::endl;
	}
	catch (std::exception& e) {}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "The type of the object referenced is: B" << std::endl;
	}
	catch (std::exception& e) {}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "The type of the object referenced is: C" << std::endl;
	}
	catch (std::exception& e) {}
}

int	main(void)
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete(base);
	return 0;
}