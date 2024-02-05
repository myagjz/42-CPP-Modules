/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:48:22 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 01:52:21 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	zombie("Foo");
	Zombie	*newzombie = newZombie("newFoo");

	zombie.announce();
	newzombie->announce();
	randomChump("chump");
	delete newzombie;
}
