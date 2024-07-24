/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:26:16 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/24 15:08:14 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade_required;
		const int			_exec_grade_required;

	public:
		Form();
		Form(std::string name, int sign_grade_required, int exec_grade_required);
		Form(const Form& instance);
		Form& operator=(const Form& instance);
		~Form();

		const std::string	getName();
		bool				getIsSignde();
		const int			getSignGradeRequired();
		const int			getExecGradeRequired();
		void				beSigned(const Bureaucrat& instance);

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

std::ostream& operator<<(std::ostream& outstream, const Form& instance);

#endif