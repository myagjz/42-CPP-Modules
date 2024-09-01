/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:01:05 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:01:07 by myagiz           ###   ########.fr       */
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
