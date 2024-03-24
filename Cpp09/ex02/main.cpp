/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:41:00 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:41:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: too few argument" << std::endl;
		return (1);
	}

	try
	{
		PmergeMe pmerge(argv);
		pmerge.sortVector();
		pmerge.sortDeque();
		pmerge.DisplayResult();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
