/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 01:00:11 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/02 01:15:29 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap& FT_instance);
		~FragTrap();

		FragTrap&	operator=(FragTrap& FT_instance);

		void	highFivesGuys(void);
};

#endif