/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:25:51 by myagiz            #+#    #+#             */
/*   Updated: 2024/04/21 13:25:52 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential", 25, 5)
{
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm("presidential", 25, 5)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	_target = obj.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {};

std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
};

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

	if (getIsSigned() == false)
		throw (AForm::UnsignedException());
	if (executor.getGrade() > getGradeRequiredToSign() || executor.getGrade() > getGradeRequiredtoExecute())
		throw (Bureaucrat::GradeTooLowException());

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}
