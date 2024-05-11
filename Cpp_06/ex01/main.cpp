#include "Serializer.hpp"

int main()
{
    t_data s;

    s.n = 5;
    s.s1 = "Hello";
    s.s2 = "world!";

    uintptr_t	str		= Serializer::serialize(&s);
    Data		*data	= Serializer::deserialize(str);

    std::cout << "n : " << data->n << std::endl;
    std::cout << "s1 : " << data->s1 << std::endl;
    std::cout << "s2 : " << data->s2 << std::endl;

	return (0);
}
