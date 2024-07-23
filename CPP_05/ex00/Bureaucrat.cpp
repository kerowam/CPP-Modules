/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:54:13 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/23 20:15:00 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
 
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << grade << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& instance): _name(instance._name), _grade(instance._grade)
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& instance)
{
	if (this != &instance)
	{
		this->_grade = instance.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string	Bureaucrat::getName()const
{
	return this->_name;
}

int	Bureaucrat::getGrade()const
{
	return this->_grade;
}

void	Bureaucrat::increment()
{
	try
	{
		this->_grade--;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << this->getGrade() << std::endl;
	}
}

void	Bureaucrat::decrement()
{
	try
	{
		this->_grade++;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << this->getGrade() << std::endl;
	}
}

const char	*Bureaucrat::GradeTooHighException::what()const throw()
{
	return "Error: Grade is too high! ";
}

const char	*Bureaucrat::GradeTooLowException::what()const throw()
{
	return "Error: Grade is too low! ";
}

std::ostream& operator<<(std::ostream& outstream, const Bureaucrat& instance)
{
	outstream << instance.getName() << ", bureaucrat grade " << instance.getGrade() << std::endl;
	return outstream;
}