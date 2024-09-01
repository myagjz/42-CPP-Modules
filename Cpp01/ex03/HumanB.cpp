/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:00:37 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:00:39 by myagiz           ###   ########.fr       */
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
