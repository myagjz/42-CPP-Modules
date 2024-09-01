/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:51:04 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:51:06 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	
		Point	&operator= (const Point &copy);
		
	public:
		Point();
		Point(const float _x, const float _y);
		Point(const Point &copy);
		~Point();

		bool	point_inline(const Point &a, const Point &b) const;
		Fixed	tri_area(const Point &a, const Point &b) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
