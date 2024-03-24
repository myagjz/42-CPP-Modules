/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:37:10 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:37:11 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T	min(T a, T b)
{
	if (b <= a)
		return (b);
	else
		return (a);
}

template <typename T>
T	max(T a, T b)
{
	if (b >= a)
		return (b);
	else
		return (a);
}
