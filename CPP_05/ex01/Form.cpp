/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:38 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/24 15:14:06 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{

}

Form::Form(std::string name, int sign_grade_required, int exec_grade_required)
{

}

Form::Form(const Form& instance)
{

}

Form& Form::operator=(const Form& instance)
{

}

Form::~Form() {}

const std::string	Form::getName()
{

}

bool	Form::getIsSignde()
{

}

const int	Form::getSignGradeRequired()
{

}

const int	Form::getExecGradeRequired()
{

}

void	Form::beSigned(const Bureaucrat& instance)
{

}

const char	*Form::GradeTooHighException::what()const throw()
{

}

const char	*Form::GradeTooLowException::what()const throw()
{

}

std::ostream& operator<<(std::ostream& outstream, const Form& instance)
{

}