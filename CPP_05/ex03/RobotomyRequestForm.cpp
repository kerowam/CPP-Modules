/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:42:02 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 17:35:04 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45)
{
	this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("Robotomy Request Form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& instance)
: AForm(instance.getName(), instance.getSignGradeRequired(), instance.getExecGradeRequired())
{
	this->_target = instance._target;

}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& instance)
{
	if (this != &instance)
	{
		this->_target = instance._target;
		//this->_is_signed = instance.getIsSigned(); // ???
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		std::cerr << "Form must be signed to execute!" << std::endl;
	if (executor.getGrade() > this->getExecGradeRequired())
		throw Bureaucrat::GradeTooLowException();
	std::srand((long)this);
	if (std::rand() % 2 == 0)
	{
		std::cout << "A drilling noise is heard!" << std::endl;
		std::cout << this->_target << " has been robotomized successfully." << std::endl;
	} else
		std::cout << this->_target << " robotomization failed." << std::endl;

}