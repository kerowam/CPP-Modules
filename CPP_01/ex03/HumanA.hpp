/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 23:03:35 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include <cstring>
# include "Weapon.hpp"

class HumanA
{
	public:
		std::string name;
		Weapon		weapon;
		HumanA();
		HumanA(std::string name, Weapon weapon_type);
		~HumanA();
		void attack();
};

#endif