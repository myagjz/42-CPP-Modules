/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:59:13 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:59:15 by myagiz           ###   ########.fr       */
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
