/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:06:04 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/11 16:09:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;

	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat	&operator= (const Cat &copy);

		void	makeSound(void) const;
		void	make_idea(std::string &idea);
};

#endif