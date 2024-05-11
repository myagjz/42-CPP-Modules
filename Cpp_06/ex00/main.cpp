#include "Scalar.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Scalar::convert(av[1]);
	}
	else
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
	}
}
