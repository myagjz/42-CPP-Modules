/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:49 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:45:50 by myagiz           ###   ########.fr       */
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
