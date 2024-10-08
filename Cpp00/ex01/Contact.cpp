/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:45:59 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:46:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : firstname(""), lastname(""), nickname(""), number(""), secret("")
{

}

void	Contact::set_firstname(const std::string &s)
{
	this->firstname = s;
}

void	Contact::set_lastname(const std::string &s)
{
	this->lastname = s;
}

void	Contact::set_nickname(const std::string &s)
{
	this->nickname = s;
}

void	Contact::set_number(const std::string &s)
{
	this->number = s;
}

void	Contact::set_secret(const std::string &s)
{
	this->secret = s;
}

std::string	Contact::get_firstname() const
{
	return (firstname);
}

std::string Contact::get_lastname() const
{
	return (lastname);
}

std::string	Contact::get_nickname() const
{
	return (nickname);
}

std::string	Contact::get_number() const
{
	return (number);
}

std::string Contact::get_secret() const
{
	return (secret);
}
