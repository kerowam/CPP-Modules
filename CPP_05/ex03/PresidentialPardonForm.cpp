/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:43:06 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/19 17:05:53 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("presidential pardon", 25, 5)
{
	this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("presidential pardon", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& instance)
: AForm(instance.getName(), instance.getSignGradeRequired(), instance.getExecGradeRequired())
{
	this->_target = instance._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& instance)
{
	if (this != &instance)
		this->_target = instance._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		std::cerr << "Form must be signed to execute!" << std::endl;
	if (executor.getGrade() > this->getExecGradeRequired())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl; 
}