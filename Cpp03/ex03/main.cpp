/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:54:06 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:54:07 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	DiamondTrap	riot;

	riot = DiamondTrap("teemo");

	std::cout << std::endl;

	riot.attack("Garen");
	riot.takeDamage(10);
	riot.beRepaired(10);
	riot.guardGate();
	riot.highFivesGuys();
	riot.whoAmI();

	std::cout << std::endl;

	DiamondTrap	jax(riot);

	jax.whoAmI();
	std::cout << std::endl;
}
