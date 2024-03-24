/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:28:55 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:28:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int  main()
{
	std::cout << "<< Copy Constructor Test >> " << std::endl;
	Bureaucrat choi("choi", 3);
	Bureaucrat lim(choi);
	std::cout << choi;
	std::cout << lim;

	try
	{
		Bureaucrat oh("Oh", 2);
		Bureaucrat kim("Kim", 150);

		std::cout << std::endl << "<< Operator << Overloading Test >> " << std::endl;
		std::cout << oh;
		std::cout << kim;

		std::cout << std::endl << "<< Increase Grade Test >> " << std::endl;
		std::cout << oh;
		oh.increase_grade();
		std::cout << oh;
		oh.increase_grade();
		std::cout << oh;

		std::cout << std::endl << "<< Decrease Grade Test >> " << std::endl;
		std::cout << kim;
		kim.decrease_grade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "High! : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Low! : " << e.what() << std::endl;
	}

	try
	{

		std::cout << std::endl << "<< Too High Exception Test >> " << std::endl;
		Bureaucrat lee("Lee", -1);
		std::cout << "lee: " << lee << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "High! : " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Low! : " << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl << "<< Too Low Exception Test >> " << std::endl;
		Bureaucrat kang("Kang", 180);
		std::cout << "kang: " << kang << std::endl;
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
