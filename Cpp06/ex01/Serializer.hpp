/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:45:54 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:45:54 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <iostream>

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(Serializer const & other);
		Serializer &operator=(const Serializer &other);

		static uintptr_t serialize(Data *ptr);
		static Data * deserialize(uintptr_t raw);
};

#endif
