/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:30:41 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 02:10:50 by gfredes-         ###   ########.fr       */
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
	//std::cout << "Adding Contact..." << std::endl;
	int	index;

	index = this->nbr_of_contacts % 8;
	this->contact[index].add_contact();
	this->nbr_of_contacts += 1;
}

void	PhoneBook::search_contact()
{
	std::cout << "Searching Contact..." << std::endl;
}