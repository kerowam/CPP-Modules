/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:12:24 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/01 15:55:00 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	private:
		std::string	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& CT_instance);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& CT_instance);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		&getName();
		void			setName(std::string& name);
		unsigned int	&getHitPoints();
		void			setHitPoints(unsigned int hit_points);
		unsigned int	&getEnergyPoints();
		void			setEnergyPoints(unsigned int energy_points);
		unsigned int	&getAttackDamage();
		void			setAttackDamage(unsigned int attack_damage);
};

#endif