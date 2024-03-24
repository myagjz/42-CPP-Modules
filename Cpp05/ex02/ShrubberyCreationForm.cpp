/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:31:21 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:31:23 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery", 145, 137)
{
	_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm("shrubbery", 145, 137)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	_target = obj.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {};

bool	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		outFileName;
	std::ofstream	outFile;

	if (getIsSigned() == false)
		throw (AForm::UnsignedException());
	if (executor.getGrade() > getGradeRequiredToSign() || executor.getGrade() > getGradeRequiredtoExecute())
		throw (Bureaucrat::GradeTooLowException());
	try
	{
		outFileName = getTarget().append("_shruberry");
		outFile.open(outFileName.c_str());
		if (!outFile.is_open())
			throw std::runtime_error("outFile open error");
    	outFile << "       ^  ^  ^   ^      ___I_      ^  ^   ^  ^  ^   ^  ^\n"
    	           "      /|\\/|\\/|\\ /|\\    /\\-_--\\    /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n"
    	           "      /|\\/|\\/|\\ /|\\   /  \\_-__\\   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n"
    	           "      /|\\/|\\/|\\ /|\\   |[]| [] |   /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\\n";
		outFile.close();
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (false);
	}
	return (true);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}
