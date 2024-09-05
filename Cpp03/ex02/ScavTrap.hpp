/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:56:01 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:56:03 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public   ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &_name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator= (const ScavTrap &copy);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif