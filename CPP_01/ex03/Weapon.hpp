/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:14:26 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 22:57:46 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <cstring>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();
		std::string const getType();
		void setType(std::string new_type);
};

#endif