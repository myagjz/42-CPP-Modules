/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:25:41 by myagiz            #+#    #+#             */
/*   Updated: 2024/04/21 16:36:48 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	Bureaucrat mordecai("Mordecai", 137);
	Bureaucrat rigby("rigby", 45);
	Bureaucrat benson("zonk", 5);
	std::cout << std::endl;

	try{
		{
			ShrubberyCreationForm form("Shrub");
			mordecai.signForm(form);
			std::cout << form;
			mordecai.executeForm(form);
		}
		{
			RobotomyRequestForm form("Rob the Robot");
			rigby.signForm(form);
			std::cout << form;
			rigby.executeForm(form);
		}
		{
			PresidentialPardonForm form("Epstein");
			benson.signForm(form);
			std::cout << form;
			benson.executeForm(form);
		}
	}
	catch(std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
