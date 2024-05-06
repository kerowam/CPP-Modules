/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:36:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/06 19:49:31 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif