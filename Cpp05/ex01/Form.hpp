/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 13:24:58 by myagiz            #+#    #+#             */
/*   Updated: 2024/04/21 13:24:59 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private :
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredtoExecute;
	public :
		Form();
		Form(std::string name, int gradeRequiredToSign, int gradeRequiredtoExecute);
		Form(const Form &obj);
		Form &operator=(const Form &obj);
		~Form();
		std::string	getName() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredtoExecure() const;
		bool		getIsSigned() const;
		void		beSigned(const Bureaucrat &bureaucrat);
		class	GradeTooHighException : public std::exception
		{
			public :
				const char *what(void) const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public :
				const char *what(void) const throw();
		};
};

std::ostream& operator << (std::ostream &os, const Form &obj);

#endif
