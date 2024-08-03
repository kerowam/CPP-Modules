/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:40:42 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/03 19:39:11 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery_Creation_Form", 145, 137)
{
	this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("Shrubbery_Creation_Form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& instance)
: AForm(instance.getName(), instance.getSignGradeRequired(), instance.getExecGradeRequired())
{
	this->_target = instance._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& instance)
{
	if (this != &instance)
		this->_target = instance._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		std::cerr << "Form must be signed to execute!" << std::endl;
	if (executor.getGrade() > this->getExecGradeRequired())
		throw Bureaucrat::GradeTooLowException();
	std::fstream	file;
	std::string		file_name = this->_target + "_shrubbery";
	try
	{
		file.open(file_name, std::fstream::out);
		if (file.fail() == true)
			throw ShrubberyCreationForm::ThrowError();
		file << "CPP_Modules/" << std::endl;
		file << "|_ CPP_05/" << std::endl;
		file << "  |- ex00/" << std::endl;
		file << "  |  |- Bureaucrat.cpp" << std::endl;
		file << "  |  |- Bureaucrat.hpp" << std::endl;
		file << "  |  |- main.cpp" << std::endl;
		file << "  |  |_ Makefile" << std::endl;
		file << "  |- ex01/" << std::endl;
		file << "  |  |- Bureaucrat.cpp" << std::endl;
		file << "  |  |- Bureaucrat.hpp" << std::endl;
		file << "  |  |- Form.cpp" << std::endl;
		file << "  |  |- Form.hpp" << std::endl;
		file << "  |  |- main.cpp" << std::endl;
		file << "  |  |_ Makefile" << std::endl;
		file << "  |_ ex02/" << std::endl;
		file << "     |- AForm.cpp" << std::endl;
		file << "     |- AForm.hpp" << std::endl;
		file << "     |- Bureaucrat.cpp" << std::endl;
		file << "     |- Bureaucrat.hpp" << std::endl;
		file << "     |- main.cpp" << std::endl;
		file << "     |- Makefile" << std::endl;
		file << "     |- PresidentialPardonForm.cpp" << std::endl;
		file << "     |- PresidentialPardonForm.hpp" << std::endl;
		file << "     |- RobotomyRequestForm.cpp" << std::endl;
		file << "     |- RobotomyRequestForm.hpp" << std::endl;
		file << "     |- ShrubberyCreationForm.cpp" << std::endl;
		file << "     |_ ShrubberyCreationForm.hpp" << std::endl;
		file.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char *ShrubberyCreationForm::ThrowError::what()const throw()
{
	return "Error: can't open file";
}