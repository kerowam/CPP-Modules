/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:15:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 18:51:20 by gfredes-         ###   ########.fr       */
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
		std::string weapon;
		HumanA();
		HumanA(std::string name, Weapon weapon);
		~HumanA();
		void attack();
};

#endif