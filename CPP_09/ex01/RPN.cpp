/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:56:48 by gfredes-          #+#    #+#             */
/*   Updated: 2024/08/17 20:07:43 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& rpn)
{
	*this = rpn;
}

RPN::RPN(std::string math_expr): _math_expr(math_expr)
{

}

RPN::~RPN() {}
		
RPN&	RPN::operator=(const RPN& rpn)
{
	if(this != &rpn)
	{
		_math_expr = rpn._math_expr;
		_stack = rpn._stack;
	}
	return *this;
}

void	RPN::calculate()
{
	for (int i = 0; _math_expr[i]; i++)
	{
		while (_math_expr[i] == ' ')
			i++;
		if (_math_expr[i] >= '0' && _math_expr[i] <= '9')
		{
			if (_math_expr[i + 1] == ' ' || !_math_expr[i + 1])
			{
				int	nbr;
				nbr = std::atoi(_math_expr.substr(i, 1).c_str());
				_stack.push(nbr);
			}
			else
			{
				std::cerr << "Error: invalid argument." << std::endl;
				return ;
			}
		}
		else if (_math_expr[i] == '+' || _math_expr[i] == '-' || _math_expr[i] == '*' || _math_expr[i] == '/')
		{
			if (_stack.empty() || _stack.size() < 2)
			{
				std::cerr << "Error: invalid argument." << std::endl;
				return ;
			}
			int	last_nbr = _stack.top();
			_stack.pop();
			if (_math_expr[i] == '+')
				_stack.top() = _stack.top() + last_nbr;
			else if (_math_expr[i] == '-')
				_stack.top() = _stack.top() - last_nbr;
			else if (_math_expr[i] == '*')
				_stack.top() = _stack.top() * last_nbr;
			else if (_math_expr[i] == '/')
				_stack.top() = _stack.top() / last_nbr;
		}
		else
		{
			std::cerr << "Error: invalid argument." << std::endl;
			return ;
		}
	}
	if (_stack.size() != 1)
	{
		std::cerr << "Error: invalid argument." << std::endl;
		return ;
	}
	else
		std::cout << _stack.top() << std::endl;
}