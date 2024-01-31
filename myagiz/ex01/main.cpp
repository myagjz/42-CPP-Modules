/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:24:16 by myagiz            #+#    #+#             */
/*   Updated: 2024/01/30 16:07:24 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string tmp;
	PhoneBook	phonebook;

	while (42)
	{
		std::cout << "ADD | SEARCH | EXIT : ";
		if (!std::getline(std::cin, tmp))
		{
			std::cout << std::endl;
			break ;
		}
		if (tmp == "ADD")
			phonebook.add_book();
		if (tmp == "SEARCH")
			phonebook.print_book();
		if (tmp == "EXIT")
			break ;
	}
	return (0);
}
