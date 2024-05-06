/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:36:41 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/06 19:52:52 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	n = 5;
	Zombie *zombie = zombieHorde(n, "Zombie");
	for (int i = 0; i < n; i++)
	{
		zombie[i].announce();
	}
	delete [] zombie;
	return 0;
}