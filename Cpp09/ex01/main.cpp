/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:40:37 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:40:40 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error : wrong argument numbers" << std::endl;
		return (1);
	}

	try
	{
		RPN rpn;
		rpn.calculate(argv[1]);
		rpn.printResult();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
