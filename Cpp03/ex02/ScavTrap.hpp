/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:05:52 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/10 14:07:54 by myagiz           ###   ########.fr       */
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