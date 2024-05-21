/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:43:31 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:43:32 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	Bureaucrat bureaucrat("YAGIZ", 1);
	std::cout << bureaucrat << std::endl;

	ShrubberyCreationForm shrubberyForm("Shrub");
	RobotomyRequestForm robotomyForm("Robot");
	PresidentialPardonForm pardonForm("President");

	bureaucrat.signForm(shrubberyForm);
	bureaucrat.signForm(robotomyForm);
	bureaucrat.signForm(pardonForm);

	std::cout << std::endl;
	bureaucrat.executeForm(shrubberyForm);
	std::cout << std::endl;
	bureaucrat.executeForm(robotomyForm);
	std::cout << std::endl;
	bureaucrat.executeForm(pardonForm);
	std::cout << std::endl;

	return 0;
}
