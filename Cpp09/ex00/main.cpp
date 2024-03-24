/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:40:03 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:40:04 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: check argument number" << std::endl;
		return (1);
	}

	try
	{
		BitcoinExchange	bitcoin(argv[1]);
		bitcoin.readInputFile();

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
