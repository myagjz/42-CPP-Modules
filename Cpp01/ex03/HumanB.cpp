/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:05:08 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 12:24:20 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
	weapon = NULL;
	std::cout << "created HumanB : " << this->name << " without weapon " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "delete HumanB : " << this->name << std::endl;
}

void	HumanB::attack()
{
	if (weapon == NULL)
		std::cout << this->name << " attacks without weapon " << std::endl;
	else
		std::cout << this->name << " attacks with their " << weapon->getType() <<std::endl;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
	std::cout << this->name << " is armed " << weapon->getType() << std::endl;
}
