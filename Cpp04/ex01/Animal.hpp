/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:04:57 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:08:07 by myagiz           ###   ########.fr       */
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
	
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &copy);
		Animal	&operator= (const Animal &copy);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif