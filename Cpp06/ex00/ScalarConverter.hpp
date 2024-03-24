/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:34:55 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:34:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <sstream>
#include "ConverterUtil.hpp"

class	ConverterUtil;

enum type{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	SPECIAL,
	OTHER
};

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator = (const ScalarConverter  &obj);
		~ScalarConverter();
	public :
		static void	convert(std::string input);
};

#endif
