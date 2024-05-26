/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:32:50 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/26 18:41:25 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe merge;

	if (argc < 3)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	merge.start(argc,argv);
	merge.process();
	return (0);
}
