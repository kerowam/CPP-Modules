/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:03:19 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 21:29:18 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include <iostream>
# include "AMateria.hpp"

 class IMateriaSource
 {
 	public:
 		virtual				~IMateriaSource() {}
 		virtual void		learnMateria(AMateria*) = 0;
 		virtual AMateria*	createMateria(std::string const & type) = 0;
 };

#endif