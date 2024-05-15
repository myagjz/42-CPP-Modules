/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:40:56 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:40:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector <int> v;
	v.push_back(15);
	v.push_back(25);
	v.push_back(35);
	v.push_back(45);

	try {
		std::cout << *easyfind(v, 25) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "The value you are looking for was not found!" << std::endl;
	}

	try {
		std::cout << *easyfind(v, 10) << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "The value you are looking for was not found!" << std::endl;
	}
	return (0);
}
