/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:57:18 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/04 20:16:38 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
	
	ClapTrap Alpha("Alpha");
	ClapTrap Beta("Beta ");
	std::cout << "------|----------|-----------|-------------|--------------|" << std::endl;
	Alpha.attack("Beta");
	Beta.attack("Alpha");
	std::cout << "------|----------|-----------|-------------|--------------|" << std::endl;
	Alpha.takeDamage(3);
	Beta.takeDamage(5);
	std::cout << "------|----------|-----------|-------------|--------------|" << std::endl;
	Alpha.beRepaired(2);
	Beta.beRepaired(10);
	std::cout << "------|----------|-----------|-------------|--------------|" << std::endl;
	Alpha.takeDamage(15);
	Alpha.attack("Beta");
	Alpha.beRepaired(5);
	std::cout << "------|----------|-----------|-------------|--------------|" << std::endl;	
	return 0;
}