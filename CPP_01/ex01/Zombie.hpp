/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:36:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 00:25:25 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstring>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif