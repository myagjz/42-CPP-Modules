/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:59:44 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:59:46 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	zombie("zombie");
	Zombie	*zombies = zombieHorde(5, "zombie");

	if (zombies == NULL)
		return (0);
	zombie.announce();
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
