
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bure1("bure_1", 150);
		Bureaucrat	bure2("bure_2", 1);
		ShrubberyCreationForm	form1("form_1");
		RobotomyRequestForm		form2("form_2");
		PresidentialPardonForm	form3("form_3");
		Intern	intern;

		//Form	form2("form_2", 151, 50);

		bure1.signForm(form1);
		std::cout << "------------------------------" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << "------------------------------" << std::endl;

		bure2.signForm(form1);
		std::cout << "------------------------------" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << "------------------------------" << std::endl;

		std::cout << std::endl;

		std::cout << "------------------------------" << std::endl;
		bure1.executeForm(form1);
		bure1.executeForm(form2);
		bure1.executeForm(form3);
		std::cout << "------------------------------" << std::endl;

		//presidential pardon
		//robotomy request
		//shrubbery creation

		std::cout << "------------------------------" << std::endl;
		AForm	*form4 = 0;
		AForm	*form5 = 0;
		AForm	*form6 = 0;
		AForm	*form7 = 0;
		try
		{
			form4 = intern.makeForm("presidential pardon", "form_4");
			form5 = intern.makeForm("robotomy request", "form_5");
			form6 = intern.makeForm("shrubbery creation", "form_6");
			form7 = intern.makeForm("shrubbery creation", "form_7");
		}
		catch(const std::exception& e)
		{
			delete form4;
			delete form5;
			delete form6;
			delete form7;
			throw;
		}
		bure2.executeForm(*form4);
		bure2.executeForm(*form5);
		bure2.executeForm(*form6);
		bure2.executeForm(*form7);
		std::cout << "------------------------------" << std::endl;
		bure2.signForm(*form4);
		bure2.signForm(*form5);
		bure2.signForm(*form6);
		std::cout << "------------------------------" << std::endl;
		bure2.executeForm(*form4);
		bure2.executeForm(*form5);
		bure2.executeForm(*form6);
		std::cout << "------------------------------" << std::endl;

		bure2.signForm(*form7);
		bure2.executeForm(*form7);
		std::cout << "------------------------------" << std::endl;

		delete form4;
		delete form5;
		delete form6;
		delete form7;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
