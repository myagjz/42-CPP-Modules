/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:57:18 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:57:22 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int	main(void)
{
	ClapTrap	jax("Jax");
	ClapTrap	malphite("Malphite");
	ClapTrap	riot;
	
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		malphite.beRepaired(10);
	std::cout << std::endl;
	malphite.attack(riot.get_name());
	riot.takeDamege(malphite.get_attack_damage());
	malphite.attack(riot.get_name());
	riot.takeDamege(malphite.get_attack_damage());
	std::cout << std::endl;
	for (int i = 0; i < 11; i++)
	{
		jax.attack(malphite.get_name());
		malphite.takeDamege(jax.get_attack_damage());
	}
}