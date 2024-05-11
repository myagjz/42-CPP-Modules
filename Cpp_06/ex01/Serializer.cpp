#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
}

Serializer::Serializer(Serializer const &original)
{
	std::cout << "Serializer copy constructor called" << std::endl;
	*this = original;
}

Serializer &Serializer::operator=(Serializer const &original)
{
	if (this != &original)
	{
		*this = original;
	}
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
