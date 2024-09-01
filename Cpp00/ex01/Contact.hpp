/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:54 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:45:55 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	number;
		std::string secret;

	public:
		Contact();

		void		set_firstname(const std::string &s);
		void		set_lastname(const std::string &s);
		void		set_nickname(const std::string &s);
		void		set_number(const std::string &s);
		void		set_secret(const std::string &s);
		std::string	get_firstname() const;
		std::string get_lastname() const;
		std::string get_nickname() const;
		std::string get_number() const;
		std::string get_secret() const;

};

#endif
