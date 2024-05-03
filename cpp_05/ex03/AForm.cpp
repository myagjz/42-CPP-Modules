
#include "AForm.hpp"

AForm::AForm()
	: name("no name"), sign(false), sign_grade(0), execute_grade(0) {}

AForm &AForm::operator= (const AForm &copy)
{
	(void)copy;
	return (*this);
}

AForm::AForm(const std::string &_name, const int _sign_grade, const int _execute_grade)
	: name(_name), sign(false), sign_grade(_sign_grade), execute_grade(_execute_grade)
{
	if (sign_grade > 150 || execute_grade > 150)
		throw (GradeTooLowException(name));
	if (sign_grade < 1 || execute_grade < 1)
		throw (GradeTooHighException(name));
	std::cout << "* AForm constructor called *" << std::endl;
}

AForm::~AForm()
{
	std::cout << "* AForm destructor called *" << std::endl;
}

AForm::AForm(const AForm &copy)
	: name(copy.name), sign(copy.sign), sign_grade(copy.sign_grade), execute_grade(copy.execute_grade)
{
	std::cout << "* AForm copy constructor called *" << std::endl;
}

std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getSign() const
{
	return (sign);
}

int	AForm::getSignGrade() const
{
	return (sign_grade);
}

int	AForm::getExecuteGrade() const
{
	return (execute_grade);
}

AForm::GradeTooLowException::GradeTooLowException(const std::string _name) : logic_error(_name + " Grade Too Low ..") {}

AForm::GradeTooHighException::GradeTooHighException(const std::string _name) : logic_error(_name + " Grade Too High ..") {}

AForm::SignException::SignException(const std::string _name) : logic_error(_name + " No Signed ..") {}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > sign_grade)
			throw (GradeTooLowException(bureaucrat.getName()));
		std::cout << bureaucrat.getName() << " signed " << name << std::endl;
		sign = 1;
	}
	catch(const GradeTooLowException &e)
	{
		std::cout << bureaucrat.getName() << " couldn’t sign " << name << " because ";
		std::cout << e.what() << std::endl;
	}
}

std::ostream	&operator<< (std::ostream& os, const AForm &Aform)
{
	os << "name : " << Aform.getName() << std::endl
		<< "sign : " << Aform.getSign() << std::endl
		<< "sign_grade : " << Aform.getSignGrade() << std::endl
		<< "execute_grade : " << Aform.getExecuteGrade();
	return (os);
}

void	AForm::checkExec(Bureaucrat const & executor) const
{
	if (executor.getGrade() > execute_grade)
		throw (GradeTooLowException(executor.getName()));
	if (sign == 0)
		throw (SignException(name));
	std::cout << executor.getName() << " executed " << getName() << std::endl;
}
