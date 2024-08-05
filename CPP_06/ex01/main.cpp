/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 20:10:40 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/05 19:57:11 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(int argc, char** argv)
{
	Data	*data_ptr = new Data;
	uintptr_t	raw = Serializer::serialize(data_ptr);
	Data	*new_ptr = Serializer::deserialize(raw);

	data_ptr->data = "Some data";
	
	std::cout << "*data_ptr:\t" << data_ptr << std::endl;
	std::cout << "data_ptr->data:\t" << data_ptr->data << std::endl;
	std::cout << "raw:\t\t" << raw << std::endl;
	std::cout << "*new_ptr:\t" << new_ptr << std::endl;
	std::cout << "new_ptr->data:\t" << new_ptr->data << std::endl;
	delete data_ptr;
	return 0;
}