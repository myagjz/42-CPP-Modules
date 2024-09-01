/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:59:35 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:59:37 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
		Zombie();

	public:
		Zombie(std::string _name);
		~Zombie();

		void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
