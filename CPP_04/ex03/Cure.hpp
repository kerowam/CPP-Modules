/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:00:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 23:38:59 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	private:
		
	public:
		Cure();
		Cure(Cure& instance);
		~Cure();
	
		Cure&		operator=(Cure& instance);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif