/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:14:02 by myagiz            #+#    #+#             */
/*   Updated: 2024/02/12 08:53:50 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
		int			size;
	
	public:
		Brain();
		~Brain();
		Brain(const Brain &copy);
		Brain	&operator= (const Brain &copy);
		
		void	make_ideas(const std::string &idea);
		void	say_ideas(void);
		void	dup_ideas(const Brain &copy);
};

#endif