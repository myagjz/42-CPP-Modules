/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:06:43 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:09:34 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	{
		Animal	*animal[10];

		for (int i = 0; i < 5; i++)
			animal[i] = new Dog();

		std::cout << std::endl;
		for (int i = 5; i < 10; i++)
			animal[i] = new Cat();

		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			animal[i]->makeSound();

		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete animal[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Cat	cat;
		Dog	dog;
		Cat	copycat(cat);
		Dog	copydog(dog);

		for (int i = 0; i < 5; i++)
		{
			cat.makeSound();
			dog.makeSound();
		}
		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 5; i++)
		{
			copycat.makeSound();
			copydog.makeSound();
		}
	}

	return 0;
}