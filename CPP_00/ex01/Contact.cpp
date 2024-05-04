/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:32:12 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 02:16:39 by gfredes-         ###   ########.fr       */
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
	//std::cout << "first name: " << this->first_name << std::endl;
	_set_contact(this->last_name, "Enter last name: ");
	//std::cout << "last name: " << this->last_name << std::endl;
	_set_contact(this->nickname, "Enter nickname: ");
	//std::cout << "nickname: " << this->nickname << std::endl;
	_set_contact(this->phone_nbr, "Enter phone number: ");
	//std::cout << "phone number: " << this->phone_nbr << std::endl;
	_set_contact(this->darkest_secret, "Enter darkest secret: ");
	//std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}