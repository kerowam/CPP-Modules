/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:40:27 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/31 17:42:51 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static Fixed	get_relative_position(const Point& a,const Point& b,const Point& point)
{
	Fixed res;

	res = ((point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY()));
	return (res);
}

bool	bsp( Point a, Point const b, Point const c, Point const point)
{
	Fixed	zero;
	Fixed	rel_pos_1(get_relative_position(a, b, point));
	Fixed	rel_pos_2(get_relative_position(b, c, point));
	Fixed	rel_pos_3(get_relative_position(c, a, point));
	bool	pos;
	bool	neg;

	if (rel_pos_1 == zero || rel_pos_2 == zero || rel_pos_3 == zero)
		return false;
	pos = (rel_pos_1 > zero || rel_pos_2 > zero || rel_pos_3 > zero);
	neg = (rel_pos_1 < zero || rel_pos_2 < zero || rel_pos_3 < zero);
	if (pos && neg)
		return false;
	return true;
}
