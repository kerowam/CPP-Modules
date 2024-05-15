/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:07:54 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/14 16:02:53 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		struct	_levelFt
		{
			std::string	lvl;
			void (Harl::* ft)(void);
		};
		struct _levelFt	lvls[4];
		
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif