/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:54:10 by myagiz            #+#    #+#             */
/*   Updated: 2024/09/01 17:54:12 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : virtual public   ClapTrap
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
