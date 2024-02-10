/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:03:55 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/10 14:07:08 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	jax("Jax");
	ScavTrap	malphite("Malphite");
	FragTrap	riot;

	riot = FragTrap("queen");

	std::cout << std::endl;

	malphite.beRepaired(10);
	std::cout << std::endl;
	malphite.guardGate();
	std::cout << std::endl;
	riot.highFivesGuys();
	std::cout << std::endl;
	malphite.attack(riot.get_name());
	riot.takeDamage(malphite.get_attack_damage());
	riot.attack(malphite.get_name());
	malphite.takeDamage(riot.get_attack_damage());
	std::cout << std::endl;
	for (int i = 0 ; i < 3; i++)
	{
		jax.attack(riot.get_name());
		riot.takeDamage(jax.get_attack_damage());
	}
}