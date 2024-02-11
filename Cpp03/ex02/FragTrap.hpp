/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:03:21 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/10 14:07:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public   ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string &_name);
		~FragTrap();
		FragTrap(const FragTrap &copy);
		FragTrap &operator= (const FragTrap &copy);

		void	highFivesGuys(void);
};

#endif