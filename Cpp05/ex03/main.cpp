/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:44:34 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:44:35 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl;
	Intern someRandomIntern;
	AForm* rrf = NULL;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (!rrf)
			std::cout << "Form creation error" << std::endl;
		else
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}
