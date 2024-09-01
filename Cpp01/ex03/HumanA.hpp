/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:00:32 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 18:00:34 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_A_HPP
# define HUMANA_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&weapon;
		std::string	name;

	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();

		void attack();
};

#endif
