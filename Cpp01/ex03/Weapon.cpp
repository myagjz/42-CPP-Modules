/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:44:28 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 12:00:08 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "created Weapon : unarmed" << std::endl;
}

Weapon::Weapon(std::string _type) : type(_type)
{
	std::cout << "created Weapon : " << this->type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "delete Weapon : " << this->type << std::endl;
}

const std::string		&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}
