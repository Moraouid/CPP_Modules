/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:12:30 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/26 10:21:51 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
	PhoneBook phoneBook;
	phoneBook.InitVar();
	std::string command;
	while (1337)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.fail())
			break;
		if (command == "ADD")
		{
			if (!phoneBook.addContact())
				break;
		}
		else if (command == "SEARCH")
		{
			if (!phoneBook.searchContact())
				break;
		}
		else if (command == "EXIT")
		{
			std::cout << "Bye!\n";
			break;
		}
		else
			std::cout << "Unknown command!\n";
	}
    return 0;
}
