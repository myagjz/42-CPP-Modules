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

	std::cout << "First Data : " << &data << std::endl;
	uintptr_t serializedPtr = Serializer::serialize(&data);
	std::cout << "SecondData : " << serializedPtr << std::endl;
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);
	std::cout << "Last Data  : " << deserializedPtr << std::endl;

	if(deserializedPtr == &data)
		std::cout << "Serialization and deserialization successful!" << std::endl;
	else
		std::cout << "Serialization and deserialization failed!" << std::endl;
}
