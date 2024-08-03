/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/03 19:03:55 by gfredes-         ###   ########.fr       */
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
		if (sign_grade_required < 1)
			throw Form::GradeTooHighException();
		else if (sign_grade_required > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << name << ": " << sign_grade_required << std::endl;
	}
	try
	{
		if (exec_grade_required > 150)
			throw Form::GradeTooLowException();
		else if (exec_grade_required < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << name << ": " << exec_grade_required << std::endl;
	}
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
		else if (this->getExecGradeRequired() > 150 || this->getExecGradeRequired() < 1
			|| this->getSignGradeRequired() > 150 || this->getSignGradeRequired() < 1)
			throw Form::InvalidForm();
		this->_is_signed = true;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << instance.getName() << ": " << instance.getGrade() << ", ";
		std::cerr << this->getName() << ": " << this->getSignGradeRequired() << std::endl;
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

const char	*Form::InvalidForm::what()const throw()
{
	return "Error: Invalid Form! ";
}

std::ostream& operator<<(std::ostream& outstream, const Form& instance)
{
	try
	{
		if (instance.getExecGradeRequired() > 150 || instance.getExecGradeRequired() < 1
			|| instance.getSignGradeRequired() > 150 || instance.getSignGradeRequired() < 1)
			throw Form::InvalidForm();
		else
		{
			outstream << "Form name: " << instance.getName() << std::endl;
			outstream << "Form signature: " << instance.getIsSigned() << std::endl;
			outstream << "Form signature grade required: " << instance.getSignGradeRequired() << std::endl;
			outstream << "Form execution grade required: " << instance.getExecGradeRequired() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << instance.getName() << std::endl;
	}
	return outstream;
}