/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:30:53 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/04 00:22:16 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
private:

public:
	PhoneBook();
	~PhoneBook();

	int	nbr_of_contacts;
	Contact	contact[8];

	void add_contact();
	void search_contact();
};

#endif