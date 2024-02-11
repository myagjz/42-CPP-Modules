/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:13:33 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:16:50 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string	type;
	
		Animal();
		Animal(const Animal &copy);
		Animal	&operator= (const Animal &copy);

	public:
		virtual ~Animal();

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif