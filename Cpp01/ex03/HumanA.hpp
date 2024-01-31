/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:59:06 by myagiz            #+#    #+#             */
/*   Updated: 2024/01/31 20:01:20 by myagiz           ###   ########.fr       */
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