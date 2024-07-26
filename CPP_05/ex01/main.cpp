/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:52:53 by gfredes-          #+#    #+#             */
/*   Updated: 2024/07/26 20:50:53 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	bureaucrat_1("Paco", 150);
	Bureaucrat	bureaucrat_2("Luis", 1);
	Bureaucrat	bureaucrat_3("Pepe", 200);
	Bureaucrat	bureaucrat_4("Patri", 75);
	Form		form_1("Form A", 75, 75);

	std::cout << bureaucrat_1 << std::endl;
	std::cout << bureaucrat_2 << std::endl;
	std::cout << bureaucrat_3 << std::endl;
	std::cout << bureaucrat_4 << std::endl;
	bureaucrat_1.signForm(form_1);
	bureaucrat_2.signForm(form_1);
	bureaucrat_3.signForm(form_1);
	bureaucrat_4.signForm(form_1);
	
}