/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:54:06 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/04 20:46:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	DiamondTrap diamondtrap("Yagiz");
	std::cout << "-----------------|----------|-----------|-------------|--------------|" << std::endl;
	diamondtrap.attack("Mustafa");
	diamondtrap.takeDamage(25);
	diamondtrap.beRepaired(35);
	std::cout << "-----------------|----------|-----------|-------------|--------------|" << std::endl;
	diamondtrap.whoAmI();
	std::cout << "-----------------|----------|-----------|-------------|--------------|" << std::endl;
	return 0;
	std::cout << "-----------------|----------|-----------|-------------|--------------|" << std::endl;
}