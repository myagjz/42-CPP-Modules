#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cmath>
#include <exception>

typedef struct Data
{
	int n;
	std::string	s1;
	std::string s2;
} t_data;

class   Serializer
{
    private:
        Serializer();

    public:
        ~Serializer();
        Serializer(Serializer const &original);
        Serializer  &operator=(Serializer const &original);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif
