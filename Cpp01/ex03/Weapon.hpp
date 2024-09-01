/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:01:11 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:01:12 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "iostream"
#include "string"

class Weapon
{
	private:
		std::string type;
		Weapon();

	public:
		Weapon(std::string _type);
		~Weapon();

		const std::string		&getType();
		void					setType(std::string _type);
};

#endif
