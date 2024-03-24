/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 17:32:56 by myagiz            #+#    #+#             */
/*   Updated: 2024/03/24 17:32:57 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
#define PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private :
		std::string	_target;
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &obj);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();
		std::string	getTarget() const;
		bool		execute(Bureaucrat const &executor) const;
};

#endif
