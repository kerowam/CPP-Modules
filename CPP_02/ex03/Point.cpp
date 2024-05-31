/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:40:17 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/31 17:39:28 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): _x(), _y()
{}

Point::Point(float x, float y): _x(x), _y(y)
{}

Point::Point(const Point& point):_x(point._x), _y(point._y)
{}

Point::~Point()
{}

Point&	Point::operator=(const Point& point)
{
	if (this != &point)
	{
		(Fixed)this->_x = point._x;
		(Fixed)this->_y = point._y;
	}
	return *this;
}

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

std::ostream& operator<<(std::ostream& outstream, const Point& point)
{
	outstream << "(" << point.getX() << ", " << point.getY() << ")";
	return (outstream);
}