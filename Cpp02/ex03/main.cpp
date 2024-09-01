/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:50:43 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:50:45 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
	std::cout << bsp(Point(1, 3), Point(2, 8), Point(3, 7), Point(2, 6)) << std::endl;
	std::cout << bsp(Point(0, 5), Point(3, 2), Point(5, 7), Point(4, 6)) << std::endl;
	std::cout << bsp(Point(0, 5), Point(3, 2), Point(5, 7), Point(5, 8)) << std::endl;
	std::cout << bsp(Point(0, 5), Point(3, 2), Point(5, 7), Point(1, 4)) << std::endl;
	return (0);
}
