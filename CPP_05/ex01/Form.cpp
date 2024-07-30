/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 18:07:30 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _is_signed(false), _sign_grade_required(150), _exec_grade_required(150)
{

}

Form::Form(std::string name, int sign_grade_required, int exec_grade_required)
: _name(name), _is_signed(false), _sign_grade_required(sign_grade_required), _exec_grade_required(exec_grade_required)
{
	try
	{
		if (sign_grade_required < 1 || exec_grade_required < 1)
			throw Form::GradeTooHighException();
		else if (sign_grade_required > 150 || exec_grade_required > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		if (sign_grade_required < 1 || sign_grade_required > 150)
			std::cerr << e.what() << name << ": " << sign_grade_required << std::endl;
		else if (exec_grade_required < 1 || exec_grade_required > 150)
			std::cerr << e.what() << name << ": " << exec_grade_required << std::endl;
		/*else if (sign_grade_required > 150)
			std::cerr << e.what() << sign_grade_required << std::endl;
		else
			std::cerr << e.what() << exec_grade_required << std::endl;*/
	}
	/*try
	{
		if (sign_grade_required > 150 || exec_grade_required > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		else if (sign_grade_required > 150)
			std::cerr << e.what() << sign_grade_required << std::endl;
		else
			std::cerr << e.what() << exec_grade_required << std::endl;
	}*/
}

Form::Form(const Form& instance): _name(instance._name), _is_signed(instance._is_signed),
	_sign_grade_required(instance._sign_grade_required), _exec_grade_required(instance._exec_grade_required)
{
	
}

Form& Form::operator=(const Form& instance)
{
	if (this != &instance)
		this->_is_signed = instance.getIsSigned();
	return *this;
}

Form::~Form() {}

const std::string	Form::getName()const
{
	return this->_name;
}

bool	Form::getIsSigned()const
{
	return this->_is_signed;
}

const int	Form::getSignGradeRequired()const
{
	return this->_sign_grade_required;
}

const int	Form::getExecGradeRequired()const
{
	return this->_exec_grade_required;
}

void	Form::beSigned(const Bureaucrat& instance)
{
	try
	{
		if (instance.getGrade() > this->getSignGradeRequired())
			throw Form::GradeTooHighException();
		this->_is_signed = true;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << instance.getName() << ": " << instance.getGrade() << std::endl;
	}
}

const char	*Form::GradeTooHighException::what()const throw()
{
	return "Error: Form grade is too high! ";
}

const char	*Form::GradeTooLowException::what()const throw()
{
	return "Error: Form grade is too low! ";
}

std::ostream& operator<<(std::ostream& outstream, const Form& instance)
{
	outstream << "Form name: " << instance.getName() << std::endl;
	outstream << "Form signature: " << instance.getIsSigned() << std::endl;
	outstream << "Form signature grade required: " << instance.getSignGradeRequired() << std::endl;
	outstream << "Form execution grade required: " << instance.getExecGradeRequired() << std::endl;
	return outstream;
}