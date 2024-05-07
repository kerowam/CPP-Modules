/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:14:26 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/07 19:12:41 by gfredes-         ###   ########.fr       */
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
		static void setType(std::string _type);
};

#endif