/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:32:09 by myagiz            #+#    #+#             */
/*   Updated: 2024/01/31 19:36:41 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie  *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        std::string			tmp = name;
		std::ostringstream	oss;

		oss << i;
		
		zombies[i].set_name(tmp.append(oss.str()));
    }
    return (zombies);
}