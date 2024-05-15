/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:46:21 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:46:22 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


Base	*generate(void)
{
	Base	*p;
	int		i;

	i = rand() % 3;
	if (i == 0)
		p = new A;
	if (i == 1)
		p = new B;
	if (i == 2)
		p = new C;
	return (p);
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Pointer is A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "Pointer is B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "Pointer is C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference is A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Reference is B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Reference is C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int	main(void)
{
	std::srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		Base	*tmp = generate();
		identify(tmp);
		identify(*tmp);
		delete tmp;
		std::cout << std::endl;
	}
}
