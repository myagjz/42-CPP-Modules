
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{
	Bureaucrat mordecai("Mordecai", 137);
	Bureaucrat rigby("Rigby", 45);
	Bureaucrat benson("Benson", 5);
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

