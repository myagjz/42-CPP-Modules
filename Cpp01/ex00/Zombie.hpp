/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:19:47 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 10:31:27 by myagiz           ###   ########.fr       */
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
