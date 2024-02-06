/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:34:21 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 14:42:00 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	private:
		int					value;
		static const int	bits = 8;

	public:
		Fixed();
		Fixed(const	int _value);
		Fixed(const	float _value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator=(const Fixed &copy);

		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void)	const;
		int		toInt(void)		const;
};

std::ostream	&operator << (std::ostream &os, const Fixed &fixed);

#endif
