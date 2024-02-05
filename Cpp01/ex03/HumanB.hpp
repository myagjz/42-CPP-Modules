/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:05:18 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/06 01:41:41 by myagiz           ###   ########.fr       */
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
