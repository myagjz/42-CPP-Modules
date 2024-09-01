/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:54:24 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:54:35 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	name = "noname";
	ClapTrap::name = "noname_clap_name";
	hit_point = FragTrap::hit_point;
	energy_point = 50;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const std::string &_name)
{
	std::cout << "DiamondTrap " << _name << " Constructor called" << std::endl;
	name = _name;
	ClapTrap::name = _name + "_clap_name";
	hit_point = FragTrap::hit_point;
	energy_point = 50;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Distructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	name = copy.name;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	name = copy.name;
	ClapTrap::name = copy.ClapTrap::name;
	hit_point = copy.hit_point;
	energy_point = copy.energy_point;
	attack_damage = copy.attack_damage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (hit_point <= 0)
	{
		std::cout << "FragTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "FragTrap " << name << " hasn't enough energy" << std::endl;
		return ;
	}
	std::cout << name << " member function call : whoAmI" << std::endl;
	std::cout << "claptrap : " << ClapTrap::name << std::endl;
	std::cout << "diamondtrap : " << name << std::endl;
}
