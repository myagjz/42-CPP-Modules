/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:44:50 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/05 11:59:48 by myagiz           ###   ########.fr       */
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
