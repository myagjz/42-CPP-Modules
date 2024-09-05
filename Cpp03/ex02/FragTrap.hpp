/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:55:27 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:55:29 by myagiz           ###   ########.fr       */
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