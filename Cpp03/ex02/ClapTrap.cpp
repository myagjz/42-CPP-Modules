/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:03:01 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/10 14:06:13 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("noname"), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name) : name(_name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Distructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hit_point(copy.hit_point), energy_point(copy.energy_point), attack_damage(copy.attack_damage)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &copy)
{
	if (this == &copy)
		return (*this);
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	name = copy.name;
	hit_point = copy.hit_point;
	energy_point = copy.energy_point;
	attack_damage = copy.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ClapTrap " << name << " hasn't enough energy" << std::endl;
		return ;
	}
	energy_point--;
	std::cout << "ClapTrap " << name
		<< " attacks " << target
			<< ", causing " << attack_damage
				<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
		return ;
	}
	hit_point -= amount;
	if (hit_point < 0)
		hit_point = 0;
	std::cout << "ClapTrap " << name
		<< " attacked " << amount
				<< " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_point <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (energy_point == 0)
	{
		std::cout << "ClapTrap " << name << " hasn't enough energy" << std::endl;
		return ;
	}
	hit_point += amount;
	energy_point--;
	std::cout << "ClapTrap " << name
		<< " repair " << amount
				<< " points of health!" << std::endl;
}

std::string	ClapTrap::get_name(void) const
{
	return (name);
}

int	ClapTrap::get_attack_damage(void) const
{
	return (attack_damage);
}