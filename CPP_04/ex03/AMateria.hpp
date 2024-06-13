/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:59:17 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 23:31:13 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	private:

	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(AMateria& instance);
		~AMateria();
		AMateria(std::string const & type);

		AMateria&			operator=(AMateria& instance);
		std::string	const	& getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif