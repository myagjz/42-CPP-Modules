/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:32:34 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/17 20:32:35 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Error" << std::endl;
		return EXIT_FAILURE;
	}

	try{
		RPN a(av[1]);
		a.start();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
