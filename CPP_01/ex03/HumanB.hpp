/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:43 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 19:11:14 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include <cstring>
# include "Weapon.hpp"
class HumanB
{
	public:
		std::string name;
		std::string weapon;
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon weap);
};

#endif