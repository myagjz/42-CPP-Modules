/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:46:16 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:46:17 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(char *av)
{
	int i;

	i = 0;
	while (av[i])
	{
		if (av[i] >= 'a' && av[i] <= 'z')
			av[i] -= 32;
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		to_upper(av[i]);
		std::cout << av[i];
	}
	std::cout << std::endl;
}
