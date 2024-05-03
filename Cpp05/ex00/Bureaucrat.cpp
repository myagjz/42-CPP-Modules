/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:24:10 by myagiz            #+#    #+#             */
/*   Updated: 2024/04/21 13:24:11 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("defualt"), _grade(150) {};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade) {};

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj)
{
	_grade = obj._grade;
	return (*this);
}

std::ostream& operator << (std::ostream &os, const Bureaucrat &obj)
{
	std::cout << obj.getName() << ", bureaucrat grade " << obj.getGrade() << "." << std::endl;
	return (os);
}

Bureaucrat::~Bureaucrat() {};

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::increase_grade()
{
	if (_grade <= 1)
		std::cout << "It's already the highest grade" << std::endl;
	else
		_grade--;
}

void	Bureaucrat::decrease_grade()
{
	if (_grade >= 150)
		std::cout << "It's already the lowest grade" << std::endl;
	else
		_grade++;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too High!");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too Low!");
}
