/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:50:34 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:50:42 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

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
		Fixed(const int _value);
		Fixed(const float _value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed	&operator= (const Fixed &copy);

		int		getRawBits(void)	const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);

		Fixed	operator+ (const Fixed &other) const;
		Fixed	operator- (const Fixed &other) const;
		Fixed	operator* (const Fixed &other) const;
		Fixed	operator/ (const Fixed &other) const;

		bool	operator> (const Fixed &other) const;
		bool	operator< (const Fixed &other) const;
		bool	operator>= (const Fixed &other) const;
		bool	operator<= (const Fixed &other) const;
		bool	operator== (const Fixed &other) const;
		bool	operator!= (const Fixed &other) const;
		
		Fixed	operator++(int);
		Fixed	&operator++();
		Fixed	operator--(int);
		Fixed	&operator--();
};

std::ostream	&operator<< (std::ostream& os, const Fixed& fixed);

#endif
