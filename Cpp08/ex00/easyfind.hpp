/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:38:39 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:38:40 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <exception>
#include <stdexcept>

template <typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator	iter;
	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
	{
		throw std::runtime_error("value not found in the container!");
	}
	return (iter);
}
