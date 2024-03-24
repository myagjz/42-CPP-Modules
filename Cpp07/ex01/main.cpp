/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:38:01 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:38:02 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "<int array test>" << std::endl;
	int	intArr[5] = {1, 2, 3, 4, 5};
	iter(intArr, 5, printEveryElementOfArray<int>);

	std::cout << std::endl << "<char array test>" << std::endl;
	char	charArr[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	iter(charArr, 7, printEveryElementOfArray<char>);

	std::cout << std::endl << "<string array test>" << std::endl;
	std::string	stringArr[3]= {"hello", "world", "!"};
	iter(stringArr, 3, printEveryElementOfArray<std::string>);

}
