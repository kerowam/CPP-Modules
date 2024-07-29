/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:42:46 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/29 19:14:47 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	public:

		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& name);
		PresidentialPardonForm(const PresidentialPardonForm& instance);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& instance);

		void	execute(Bureaucrat const & executor) const;

		class ThrowError: public std::exception
		{
			public:
				const char *what()const throw();
		};
}

#endif