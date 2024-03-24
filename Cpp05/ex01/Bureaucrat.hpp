/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:29:22 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:29:24 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		Bureaucrat &operator =(const Bureaucrat &obj);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		increase_grade();
		void		decrease_grade();
		void		signForm(Form &form);
		class		GradeTooHighException : public std::exception
		{
			public :
				const char *what(void) const throw();
		};
		class		GradeTooLowException : public std::exception
		{
			public :
				const char *what(void) const throw();
		};
};

std::ostream& operator << (std::ostream &os, const Bureaucrat &obj);

#endif
