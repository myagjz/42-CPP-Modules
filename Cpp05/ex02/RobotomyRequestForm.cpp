/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:31:08 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:31:09 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy", 72, 45)
{
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("robotomy", 72, 45)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	_target = obj.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {};

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

bool	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() == false)
		throw (AForm::UnsignedException());
	if (executor.getGrade() > getGradeRequiredToSign() || executor.getGrade() > getGradeRequiredtoExecute())
		throw (Bureaucrat::GradeTooLowException());

	std::srand(static_cast<unsigned>(std::time(0)));
	int	randNum = 0;
	std::cout << "Drillllllllllll........." << std::endl;
	std::cout << "with a 50% chance..." << std::endl;
	randNum = rand();
	if (randNum % 2  == 0)
	{
		std::cout << getTarget() << " has been robotomized!" << std::endl;
	}
	else
	{
		std::cout << getTarget() << " robotomized is failed!" << std::endl;
	}
	return (true);
}
