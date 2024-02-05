/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:37:39 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 01:53:12 by myagiz           ###   ########.fr       */
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
