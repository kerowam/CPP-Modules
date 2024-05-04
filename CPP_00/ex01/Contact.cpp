/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:32:12 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 03:38:20 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

void	Contact::_set_contact(std::string& input, std::string prompt)
{
	input.clear();
	std::cout << prompt;
	getline(std::cin, input);
}

void	Contact::add_contact()
{
	_set_contact(this->first_name, "Enter first name: ");
	_set_contact(this->last_name, "Enter last name: ");
	_set_contact(this->nickname, "Enter nickname: ");
	_set_contact(this->phone_nbr, "Enter phone number: ");
	_set_contact(this->darkest_secret, "Enter darkest secret: ");
	std::cout << std::endl;
}