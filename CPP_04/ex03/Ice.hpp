/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 20:59:58 by gfredes-          #+#    #+#             */
/*   Updated: 2024/06/12 21:21:23 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>

class Ice
{
private:
	
public:
	Ice();
	Ice(Ice& instance);
	~Ice();

	Ice&	operator=(Ice& instance);
};

#endif