/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 18:40:41 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 20:21:08 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern& intern)
{
	(void)intern;
}

Intern::~Intern()
{

}

Intern&	Intern::operator=(const Intern& intern)
{
	(void)intern;
	return *this;
}

AForm*	Intern::makeForm(const std::string& form_name, const std::string& target)
{
	AForm		*form_ptr[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	std::string	forms_name[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i = 0;

	for(; i < 3; i++)
	{
		if (form_name == forms_name[i])
			break;
	}
	for (int j = 0; j < 3; j++)
	{
		if (j != i)
			delete(form_ptr[j]);
	}
	if (i != 3)
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return ((AForm *)form_ptr[i]);
	}
	else
	{
		std::cerr << "Error: Form doesn't exist." << std::endl;
		return (NULL);
	}
}