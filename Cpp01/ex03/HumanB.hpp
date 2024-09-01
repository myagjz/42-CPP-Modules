/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:00:41 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:00:43 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_B_HPP
# define HUMANB_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*weapon;
		std::string	name;

	public:
		HumanB(std::string _name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &_weapon);
};

#endif
