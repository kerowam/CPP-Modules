/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfredes- <gfredes-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:40:07 by gfredes-          #+#    #+#             */
/*   Updated: 2024/05/29 22:50:35 by gfredes-         ###   ########.fr       */
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

	public:
		Point();
		Point(float x, float y);
		Point(const Point& point);
		~Point();

		Point&	operator=(const Point& point);
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);


#endif