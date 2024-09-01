/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:50:25 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:50:27 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (point.point_inline(a, b))
		return (false);
	if (point.point_inline(b, c))
		return (false);
	if (point.point_inline(a, c))
		return (false);
	if (a.tri_area(b, c) == Fixed(point.tri_area(a, b) + point.tri_area(b, c) + point.tri_area(a, c)))
		return (true);	
	return (false);
}
