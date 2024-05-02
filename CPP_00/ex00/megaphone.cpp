/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 22:39:21 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/03 00:23:24 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}

	std::string inputStr;
	for (int i = 0; i < argc; i++)
	{
		inputStr += argv[i];
		if (i < argc - 1)
			inputStr += " ";
	}
	for (int i = 0; inputStr[i] != 0; i++)
	{
		inputStr[i] = std::toupper(inputStr[i]);
	}
	std::cout << inputStr << std::endl;
	return 0;
}