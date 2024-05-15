/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:45:31 by myagiz            #+#    #+#             */
/*   Updated: 2024/05/15 15:45:31 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
	data.name = "YAGIZ";
	data.value = 42;

	uintptr_t serializedPtr = Serializer::serialize(&data);
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);

	if(deserializedPtr == &data)
		std::cout << "Serialization and deserialization successful!" << std::endl;
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;
}
