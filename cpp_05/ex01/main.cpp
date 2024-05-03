
#include "Bureaucrat.hpp"
#include "Form.hpp"

int  main()
{
	try
	{
		Bureaucrat	yagiz("Yagiz", 1);
		Bureaucrat	mustafa("Mustafa", 101);
		Form		form0("FORM_0", 10, 50);
		Form		form1("FORM_1", 50, 100);

		yagiz.signForm(form0);

		std::cout << "------------------------------" << std::endl;
		std::cout << form0 << std::endl;
		std::cout << "------------------------------" << std::endl;

		mustafa.signForm(form1);

		std::cout << "------------------------------" << std::endl;
		std::cout << form1 << std::endl;
		std::cout << "------------------------------" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

