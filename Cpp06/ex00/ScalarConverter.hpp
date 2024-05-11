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
