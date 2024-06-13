/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:03:35 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/13 16:04:26 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria	*_materias[4];
	
	public:
		MateriaSource();
		MateriaSource(MateriaSource& instance);
		~MateriaSource();

		MateriaSource&	operator=(MateriaSource& instance);
		void			learnMateria(AMateria*);
 		AMateria*		createMateria(std::string const & type);
};

#endif