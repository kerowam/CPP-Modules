/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 18:54:12 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/10 19:12:00 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>


class Span
{
	private:
		std::vector<int> _array;
		
		Span();

	public:
		Span(unsigned int N);
		Span(const Span& span);
		~Span();

		Span&	operator=(const Span& span);
		void	addNumber(int nbr);
		int		shortestSpan();
		int		longestSpan();

		class FullArray: public std::exception
		{
			public:
				const char *what()const throw();
		};

		class InsufficientNumbers: public std::exception
		{
			public:
				const char *what()const throw();
		};
};

#endif