/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:14:57 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:17:54 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog	&operator= (const Dog &copy);

		void	makeSound(void) const;
		void	make_idea(std::string &idea);
};

#endif