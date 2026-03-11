/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 00:10:07 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/03/11 00:27:09 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
	data.i = 42;
	data.f = 3.14f;
	data.s = "Hello World!";

	std::cout << "-----Original Data-----" << std::endl;
	std::cout << "Integer: " << data.i << std::endl;
	std::cout << "Float: " << data.f << std::endl;
	std::cout << "String: " << data.s << std::endl;

	uintptr_t serializedData = Serializer::serialize(&data);
	std::cout << "\nSerialized Data (uintptr_t): " << serializedData << std::endl;

	Data* deserializedData = Serializer::deserialize(serializedData);
	std::cout << "\n----Deserialized Data----" << std::endl;
	std::cout << "Integer: " << deserializedData->i << std::endl;
	std::cout << "Float: " << deserializedData->f << std::endl;
	std::cout << "String: " << deserializedData->s << std::endl;

	return 0;
}
