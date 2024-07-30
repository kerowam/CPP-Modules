/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:52:53 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 19:12:19 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	bureaucrat_1("Paco", 150);
	Bureaucrat	bureaucrat_2("Luis", 1);
	Bureaucrat	bureaucrat_3("Pepe", 200);
	Bureaucrat	bureaucrat_4("Patri", 75);
	AForm		*shrubbery_form = new ShrubberyCreationForm("Creation");
	AForm		*robotomy_form = new RobotomyRequestForm("Request");
	AForm		*presidential_form = new PresidentialPardonForm("Pardon");

	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	std::cout << bureaucrat_3 << std::endl;
	std::cout << bureaucrat_4 << std::endl;
	bureaucrat_1.signForm(*shrubbery_form);
	bureaucrat_2.signForm(*shrubbery_form);
	bureaucrat_3.signForm(*shrubbery_form);
	bureaucrat_4.signForm(*shrubbery_form);
	
	bureaucrat_1.signForm(*robotomy_form);
	bureaucrat_2.signForm(*robotomy_form);
	bureaucrat_3.signForm(*robotomy_form);
	bureaucrat_4.signForm(*robotomy_form);

	bureaucrat_1.signForm(*presidential_form);
	bureaucrat_2.signForm(*presidential_form);
	bureaucrat_3.signForm(*presidential_form);
	bureaucrat_4.signForm(*presidential_form);

	bureaucrat_1.executeForm(*shrubbery_form);
	bureaucrat_2.executeForm(*shrubbery_form);
	bureaucrat_3.executeForm(*shrubbery_form);
	bureaucrat_4.executeForm(*shrubbery_form);
	
	bureaucrat_1.executeForm(*robotomy_form);
	bureaucrat_2.executeForm(*robotomy_form);
	bureaucrat_2.executeForm(*robotomy_form);
	bureaucrat_2.executeForm(*robotomy_form);
	bureaucrat_2.executeForm(*robotomy_form);
	bureaucrat_3.executeForm(*robotomy_form);
	bureaucrat_4.executeForm(*robotomy_form);
	
	bureaucrat_1.executeForm(*presidential_form);
	bureaucrat_2.executeForm(*presidential_form);
	bureaucrat_3.executeForm(*presidential_form);
	bureaucrat_4.executeForm(*presidential_form);

	delete(shrubbery_form);
	delete(robotomy_form);
	delete(presidential_form);
}