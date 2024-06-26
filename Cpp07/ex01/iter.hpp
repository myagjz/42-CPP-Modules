/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:46:50 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:46:50 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	func(T &a)
{
	std::cout << a << std::endl;
}

template<typename T>
void	iter(T *array, size_t length, void (*func)(T &element) )
{
	size_t i = 0;
	while(i < length)
	{
		func(array[i]);
		i++;
	}
}

#endif
