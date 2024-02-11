/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:57:33 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:00:16 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat distructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator= (const Cat &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "Cat copy assignment operator called" << std::endl;
	type = copy.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << std::endl;
	std::cout << "============================================= " << std::endl;
	std::cout << "Cat member funcion : makeSound called" << std::endl;
	std::cout << "type : " << type << std::endl;
	std::cout << "Cat Sound !" << std::endl;
	std::cout << "============================================= " << std::endl;
	std::cout << std::endl;
}