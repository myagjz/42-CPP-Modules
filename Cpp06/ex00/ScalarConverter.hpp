/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:45:23 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:45:23 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <exception>

class	ScalarConverter
{
	 private:
		ScalarConverter();

	 public:
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &original);
		ScalarConverter	&operator=(ScalarConverter const &original);
		static void		convert(std::string str);
};

#endif
