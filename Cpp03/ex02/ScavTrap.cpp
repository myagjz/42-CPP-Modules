/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:55:49 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:55:51 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor called" << std::endl;
	name = "noname";
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;	
}

ScavTrap::ScavTrap(const std::string &_name)
{
	std::cout << "ScavTrap " << _name << " Constructor called" << std::endl;
	name = _name;
	hit_point = 100;
	energy_point = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap()
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	name = copy.name;
	hit_point = copy.hit_point;
	energy_point = copy.energy_point;
	attack_damage = copy.attack_damage;
}

ScavTrap &ScavTrap::operator= (const ScavTrap &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	name = copy.name;
	hit_point = copy.hit_point;
	energy_point = copy.energy_point;
	attack_damage = copy.attack_damage;

	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (hit_point <= 0)
	{
		std::cout << "ScavTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ScavTrap " << name << " hasn't enough energy" << std::endl;
		return ;
	}
	energy_point--;
	std::cout << "ScavTrap " << name
		<< " attacks " << target
			<< ", causing " << attack_damage
				<< " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (hit_point <= 0)
	{
		std::cout << "ScavTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ScavTrap " << name << " hasn't enough energy" << std::endl;
		return ;
	}
	energy_point--;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}