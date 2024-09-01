/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:00:03 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:00:05 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		Zombie(std::string _name);
		~Zombie();

		void announce();
		void set_name(std::string _name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
