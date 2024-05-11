#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &original)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = original;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &original)
{
	if (this != &original)
	{
		*this = original;
	}
	return (*this);
}

void ScalarConverter::convert(std::string str)
{
	try
	{
		char *end;
		double d = std::strtod(str.c_str(), &end);
		if ((*end && *end != 'f') || strlen(end) > 1)
			throw std::invalid_argument("Error: Invalid argument");
		int i = static_cast<int>(d);
		char c = static_cast<char>(d);
		float f = static_cast<float>(d);

		if (str != "nanf" && str != "-inff" && str != "inff" && str != "nan" && str != "-inf" && str != "inf")
		{
			if (i < 32 || i > 126)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char:" << "'" << c << "'" << std::endl;

			std::cout << "int: " << i << std::endl;
		}
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		std::cout << "float: ";
		if (f - i == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;

		std::cout << "double: ";
		if (d - i == 0)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
