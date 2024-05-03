/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 00:40:49 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 00:55:05 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cout << "Enter ADD to add a contact on the phonebook" << std::endl;
		std::cout << "Enter SEARCH to see the contacts information" << std::endl;
		std::cout << "Enter EXIT to finish the program" << std::endl;
		getline(std::cin, input);

		if (input == "ADD")
			phoneBook.add_contact();
		else if (input == "SEARCH")
			phoneBook.search_contact();
		else if (input == "EXIT")
			break ;
	}
	return (0);
}