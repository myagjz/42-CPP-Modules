/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:34:46 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:34:48 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	*this = obj;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void	ScalarConverter::convert(std::string input)
{
	std::string	joinedInput;
	int			type;

	joinedInput = ConverterUtil::deleteWhiteSpace(input);
	type = ConverterUtil::determineType(joinedInput);
	switch(type)
	{
		case (CHAR):
			ConverterUtil::printConvertedFromChar(joinedInput);
			break;
		case (INT):
			ConverterUtil::printConvertedFromInt(joinedInput);
			break;
		case (FLOAT):
			ConverterUtil::printConvertedFromFloat(joinedInput);
			break;
		case (DOUBLE) :
			ConverterUtil::printConvertedFromDouble(joinedInput);
			break;
		case (SPECIAL) :
			ConverterUtil::printSpecial(joinedInput);
			break;
		default:
			ConverterUtil::printDefault();
	}
}
