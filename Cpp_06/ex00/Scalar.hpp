#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <cmath>
#include <exception>

class   Scalar
{
    private:
        Scalar();

    public:
        ~Scalar();
        Scalar(Scalar const &original);
        Scalar  &operator=(Scalar const &original);
		static void		convert(std::string str);
};

#endif
