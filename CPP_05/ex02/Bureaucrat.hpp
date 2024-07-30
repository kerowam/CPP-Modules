/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:54:08 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/30 17:13:32 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include "AForm.hpp"

class AForm;

class	Bureaucrat
{
	private:
		
		const std::string	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat& instance);
		Bureaucrat&	operator=(const Bureaucrat& instance);
		~Bureaucrat();

		const std::string	getName()const;
		int					getGrade()const;
		void				increment();
		void				decrement();

		void	signForm(AForm& instance);

		void	executeForm(AForm const & form);

		class	GradeTooHighException: public std::exception
		{
			public:
				const char*	what()const	throw();
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				const char*	what()const	throw();
		};
};

std::ostream& operator<<(std::ostream& outstream, const Bureaucrat& instance);

#endif