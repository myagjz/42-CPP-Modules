/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:21:01 by myagiz            #+#    #+#             */
/*   Updated: 2024/01/31 13:21:13 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {}

void	PhoneBook::add_book()
{
	std::string tmp;

	while (42)
	{
		std::cout << "first_name : ";
		std::getline(std::cin, tmp);
		if (tmp[0] == 0)
			continue;
		contact[index % 8].set_firstname(tmp);
		break ;
	}
	while (42)
	{
		std::cout << "last_name : ";
		std::getline(std::cin, tmp);
		if (tmp[0] == 0)
			continue;
		contact[index % 8].set_lastname(tmp);
		break ;
	}
	while (42)
	{
		std::cout << "nickname : ";
		std::getline(std::cin, tmp);
		if (tmp[0] == 0)
			continue;
		contact[index % 8].set_nickname(tmp);
		break ;
	}
	while (42)
	{
		std::cout << "number : ";
		std::getline(std::cin, tmp);
		if (tmp[0] == 0)
			continue;
		contact[index % 8].set_number(tmp);
		break ;
	}
	while (42)
	{
		std::cout << "secret : ";
		std::getline(std::cin, tmp);
		if (tmp[0] == 0)
			continue;
		contact[index % 8].set_secret(tmp);
		break ;
	}
	index++;
}

void	PhoneBook::print_book()
{
	int			size;
	std::string	select;

	if (index > 8)
		size = 8;
	else
		size = index;
	std::cout << std::setw(10) << std::setfill(' ') << "index" << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "firstname" << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "lastname" << "|";
	std::cout << std::setw(10) << std::setfill(' ') << "nickname" << "|" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(10) << std::setfill(' ') << i << "|";
		std::cout << std::setw(10) << std::setfill(' ') << ten_character(contact[i].get_firstname()).substr(0,10) << "|";
		std::cout << std::setw(10) << std::setfill(' ') << ten_character(contact[i].get_lastname()).substr(0,10) << "|";
		std::cout << std::setw(10) << std::setfill(' ') << ten_character(contact[i].get_nickname()).substr(0,10) << "|" << std::endl;
	}
	std::cout << "select index : ";
	std::getline(std::cin, select);
	if (select[0] < '0' || select[0] >= size + '0' || select[1] != 0 || size == 0)
		std::cout << "wrong index" << std::endl;
	else if (select[0] - '0' < size)
	{
		std::cout << "fisrt name : " << contact[select[0] - '0'].get_firstname() << std::endl;
		std::cout << "last name : " << contact[select[0] - '0'].get_lastname() << std::endl;
		std::cout << "nickname : " << contact[select[0] - '0'].get_nickname() << std::endl;
		std::cout << "number : " << contact[select[0] - '0'].get_number() << std::endl;
		std::cout << "secret : " << contact[select[0] - '0'].get_secret() << std::endl;
	}
}

std::string PhoneBook::ten_character(std::string s)
{
	std::string str;

	str = s;
	if (s.length() > 10)
		str.replace(9, 1, ".");
	return (str);
}
