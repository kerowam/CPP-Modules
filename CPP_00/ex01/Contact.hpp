/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 23:32:28 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/18 22:46:03 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact
{
private:
	void _set_contact(std::string& input, std::string prompt);
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_nbr;
	std::string darkest_secret;

public:
	Contact();
	~Contact();


	void add_contact();
};

#endif