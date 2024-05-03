/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:24:24 by myagiz            #+#    #+#             */
/*   Updated: 2024/04/21 13:24:25 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int  main()
{
	try
	{
		Bureaucrat yagiz("yagiz", 2);
		Bureaucrat mustafa("mustafa", 150);

		std::cout << std::endl << "<<-------------------->> " << std::endl;
		std::cout << yagiz;
		std::cout << mustafa;

		std::cout << std::endl << "<< Increase Grade Test >> " << std::endl;
		std::cout << yagiz;
		yagiz.increase_grade();
		std::cout << yagiz;
		yagiz.increase_grade();
		std::cout << yagiz;

		std::cout << std::endl << "<< Decrease Grade Test >> " << std::endl;
		std::cout << mustafa;
		mustafa.decrease_grade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "High! : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Low! : " << e.what() << std::endl;
	}
}
