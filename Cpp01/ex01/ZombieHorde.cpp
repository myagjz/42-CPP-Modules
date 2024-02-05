/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:32:09 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 10:44:03 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie	*zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].set_name(name);
	}
	return (zombies);
}
