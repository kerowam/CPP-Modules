/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:57:07 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 19:06:25 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

class RPN
{
	private:
		std::string		_math_expr;
		std::stack<int>	_stack;
		
		RPN();

	public:
		RPN(const RPN& rpn);
		RPN(std::string math_expr);
		~RPN();
		
		RPN&	operator=(const RPN& rpn);
		void	calculate();
}

#endif