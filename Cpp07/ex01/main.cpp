/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:46:53 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:46:53 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int main()
{
	int intArr[] = {1, 2, 3};
	float floatArr[] = {4.2, 2.4, 1.1};
	char charArr[] = {'a', 'b', 'c'};

	std::cout << std::endl;
	std::cout << "Int array: " << std::endl;
	iter(intArr, 3, &func);

	std::cout << std::endl;
	std::cout << "Float array: " << std::endl;
	iter(floatArr, 3,&func);

	std::cout << std::endl;
	std::cout << "Char array: " << std::endl;
	iter(charArr, 3, &func);
}
