/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:59:32 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:59:33 by myagiz           ###   ########.fr       */
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
