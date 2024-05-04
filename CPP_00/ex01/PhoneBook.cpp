/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:30:41 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 03:39:12 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	nbr_of_contacts = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add_contact()
{
	int	index;

	index = this->nbr_of_contacts % 8;
	this->contact[index].add_contact();
	this->nbr_of_contacts += 1;
}

void	PhoneBook::search_contact()
{
	//std::cout << "Searching Contact..." << std::endl;

	if (this->contact[0].first_name.empty())
		std::cout << "Your Phonebook is empty. You can ADD a new one." << std::endl;
	else
	{
		std::cout << "|" << std::setw(10) << "Index";
		std::cout << "|" << std::setw(10) << "First name";
		std::cout << "|" << std::setw(10) << "Last name";
		std::cout << "|" << std::setw(10) << "Nickname";
		std::cout << "|" << std::endl;

		int	contacts;
		
		if (this->nbr_of_contacts > 8)
			contacts = 8;
		else
			contacts = this->nbr_of_contacts;
		
		for (int i = 0; i < contacts; i++)
		{
			std::cout << "|" << std::setw(10) << (i + 1);
			if (this->contact[i].first_name.length() > 10)
				std::cout << "|" << this->contact[i].first_name.substr(0, 9) << ".";
			else
				std::cout << "|" << std::setw(10) << this->contact[i].first_name;
			if (this->contact[i].last_name.length() > 10)
				std::cout << "|" << this->contact[i].last_name.substr(0, 9) << ".";
			else
				std::cout << "|" << std::setw(10) << this->contact[i].last_name;
			if (this->contact[i].nickname.length() > 10)
				std::cout << "|" << this->contact[i].nickname.substr(0, 9) << ".";
			else
				std::cout << "|" << std::setw(10) << this->contact[i].nickname;
			std::cout << "|" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Enter a valid index to view more information: ";

		std::string input;
		int			index;

		while (1)
		{
			getline(std::cin, input);
			index = std::atoi(input.c_str());
			if (index < 1 || index > 8 || index > contacts)
				std::cout << "Invalid index, try again with a valid index: ";
			else
				break ;
		}
		index--;
		std::cout << "First name: " << this->contact[index].first_name << std::endl;
		std::cout << "Last name: " << this->contact[index].last_name << std::endl;
		std::cout << "Nickname: " << this->contact[index].nickname << std::endl;
		std::cout << "Phone number: " << this->contact[index].phone_nbr << std::endl;
		std::cout << "Darkest secret: " << this->contact[index].darkest_secret << std::endl;
		std::cout << std::endl;
	}
}