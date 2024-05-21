/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:43:55 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:43:56 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other) : AForm(other)
{
	target=other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	if(this != &other)
	{
		AForm::operator=(other);
		target = other.target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();

	std::string asciiTree = "by YAGIZ\n"
		"   *   \n"
		"  ***  \n"
		" ***** \n"
		"*******\n"
		"  ***  \n";
	std::string filename = target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.is_open())
	{
		file << asciiTree;
		file.close();
	}
	else
		throw std::runtime_error("Failed to create shrubbery file");
}
