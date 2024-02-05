/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:38:39 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 01:52:27 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("")
{
	std::cout << "Create : no name " << std::endl;
}

Zombie::Zombie(std::string _name) : name(_name)
{
	std::cout << "Create : " << this->name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Remove : " << this->name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
