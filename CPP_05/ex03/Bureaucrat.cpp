/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:54:13 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/03 19:35:23 by gfredes-         ###   ########.fr       */
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
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		else if (grade < 1)
		{
			this->_grade = 150;
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << this->getName() << ": " << grade << std::endl;
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
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade--;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << this->getName() << ": " << this->getGrade() << std::endl;
	}
}

void	Bureaucrat::decrement()
{
	try
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << this->getName() << ": " << this->getGrade() << std::endl;
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

void	Bureaucrat::signForm(AForm& instance)
{
	instance.beSigned(*this);
	if (this->getGrade() <= instance.getSignGradeRequired())
		std::cout << this->getName() << " signed " << instance.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << instance.getName() << " because bureaucrat grade is too low." << std::endl;
		
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << this->getName() << " can't execute " << form.getName() << std::endl;
	}
}