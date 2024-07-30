/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:16 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 17:18:56 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade_required;
		const int			_exec_grade_required;

	protected:
		std::string	_target;

	public:
		AForm();
		AForm(std::string name, int sign_grade_required, int exec_grade_required);
		AForm(const AForm& instance);
		AForm& operator=(const AForm& instance);
		~AForm();

		const std::string	getName()const;
		bool				getIsSigned()const;
		const int			getSignGradeRequired()const;
		const int			getExecGradeRequired()const;
		void				beSigned(const Bureaucrat& instance);

		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				const char*	what()const	throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char*	what()const	throw();
		};
};

std::ostream& operator<<(std::ostream& outstream, const AForm& instance);

#endif