/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:40:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/29 19:18:38 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& name);
		ShrubberyCreationForm(const ShrubberyCreationForm& instance);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& instance);

		void	execute(Bureaucrat const & executor) const;

		class ThrowError: public std::exception
		{
			public:
				const char *what()const throw();
		};
}

#endif