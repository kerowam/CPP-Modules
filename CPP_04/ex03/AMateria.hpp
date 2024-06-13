/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:59:17 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/13 16:30:39 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:

	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(AMateria& instance);
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria&			operator=(AMateria& instance);
		std::string	const	& getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif