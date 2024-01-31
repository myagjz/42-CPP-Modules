/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:22:09 by myagiz            #+#    #+#             */
/*   Updated: 2024/01/31 19:24:40 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
    private:
        std::string name;
        
    public:
        Zombie();
        Zombie(std::string _name);
        ~Zombie();
        
        void announce();
        void set_name(std::string _name);
};

Zombie  *zombieHorde(int N, std::string name);

#endif