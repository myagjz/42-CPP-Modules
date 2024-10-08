/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:01:20 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:01:22 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);

	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::ifstream	input(file.c_str());
	if (!input.is_open())
	{
		std::cout << "error" << std::endl;
		return (1);
	}
	file.append(".replace");
	std::ofstream	output(file.c_str());
	if (!output.is_open())
	{
		input.close();
		std::cout << "error" << std::endl;
		return (1);
	}

	std::stringstream	buffer;
	buffer << input.rdbuf();
	std::string	str = buffer.str();
	size_t	found = 0;
	while (42)
	{
		if (!s1.size())
			break ;
		found = str.find(s1, found);
		if (found == std::string::npos)
			break ;
		str.erase(found, s1.size());
		for (size_t i = 0; i < s2.size(); i++)
			str.insert(found + i, 1, s2[i]);
		found += s2.size();
	}
	output << str;
	input.close();
	output.close();
	return (0);
}
