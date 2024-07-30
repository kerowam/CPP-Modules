/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:41:44 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 17:06:07 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	public:

		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& instance);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& instance);

		void	execute(Bureaucrat const & executor) const;

		class ThrowError: public std::exception
		{
			public:
				const char *what()const throw();
		};
};

#endif