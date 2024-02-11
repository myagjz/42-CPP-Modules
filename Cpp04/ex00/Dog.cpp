/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:57:56 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:00:36 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog distructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator= (const Dog &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "Dog copy assignment operator called" << std::endl;
	type = copy.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << std::endl;
	std::cout << "============================================= " << std::endl;
	std::cout << "Dog member funcion : makeSound called" << std::endl;
	std::cout << "type : " << type << std::endl;
	std::cout << "Dog Sound !" << std::endl;
	std::cout << "============================================= " << std::endl;
	std::cout << std::endl;
}