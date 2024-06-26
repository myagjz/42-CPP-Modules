/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:42:59 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:42:59 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try
	{
		std::cout << std::endl;
		Bureaucrat bureaucrat1("YAGIZ", 5);
		std::cout << bureaucrat1 << std::endl;

		Bureaucrat bureaucrat2("MUSTAFA", 120);
		std::cout << bureaucrat2 << std::endl;

		Form form1("Form1", 10, 30);
		std::cout << form1 << std::endl;

		Form form2("Form2", 2, 80);
		std::cout << form2 << std::endl;

		bureaucrat1.signForm(form1);
		std::cout << form1 << std::endl;

		bureaucrat2.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
