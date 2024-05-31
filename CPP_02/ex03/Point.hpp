/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:40:07 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/31 02:09:27 by gfredes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <ostream>
# include <cmath>
# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	_x;
		Fixed const	_y;
		
		//void	_setX(const Point point);
		//void	_setY(Fixed const y);

	public:
		Point();
		Point(float x, float y);
		Point(const Point& point);
		~Point();

		Point&	operator=(const Point& point);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);


#endif