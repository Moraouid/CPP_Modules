/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:13:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/25 19:13:38 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::InitVar()
{
	index = 0;
	count = 0;
}

std::string formatPrint(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

bool isNumber(std::string str)
{
	char c;

	for (size_t i = 0; i < str.length(); i++)
	{
		c = str[i];
		if (!std::isdigit(c))
			return (false);
	}
	return (true);
}

int PhoneBook::addContact()
{
	Contact tmpContacts;
	std::string answer;

	do
	{
		std::cout << "The First Name: ";
		std::getline(std::cin, answer);
		if (std::cin.fail())
			return 0;
		tmpContacts.setFirstName(answer);
	} while (answer.empty());

	do
	{
		std::cout << "The Last Name: ";
		std::getline(std::cin, answer);
		if (std::cin.fail())
			return 0;
		tmpContacts.setLastName(answer);
	} while (answer.empty());

	do
	{
		std::cout << "nickname: ";
		std::getline(std::cin, answer);
		if (std::cin.fail())
			return 0;
		tmpContacts.setNickname(answer);
	} while (answer.empty());

	do
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, answer);
		if (std::cin.fail())
			return 0;
		tmpContacts.setPhoneNumber(answer);
	} while (answer.empty());

	do
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, answer);
		if (std::cin.fail())
			return 0;
		tmpContacts.setDarkestSecret(answer);
	} while (answer.empty());

	contacts[index] = tmpContacts;
	index = (index + 1) % 8;
	if (count < 8)
		count++;

	return 1;
}

int PhoneBook::searchContact(void)
{
	std::string input;

	if (count == 0)
	{
		std::cout << "No Contact Yet!\n";
		return 1;
	}
	std::cout << "+==========+==========+==========+==========+\n";
	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname"
			  << "|\n";
	std::cout << "+==========+==========+==========+==========+\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << formatPrint(contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << formatPrint(contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << formatPrint(contacts[i].getNickname());
		std::cout << "|\n";
	}
	std::cout << "+==========+==========+==========+==========+\n";
	std::cout << "Enter index to view details: ";
	std::getline(std::cin, input);
	if(std::cin.fail())
		return 0;

	if(input.empty())
		return 1;
	if(input.length() != 1 || input[0] < '0' || input[0] > '7' || (input[0] - '0') >= count)
	{
		std::cout << "Invalid Index!\n";
		return 1;
	}

	std::cout << "First Name: " << contacts[input[0] - '0'].getFirstName() << "\n";
	std::cout << "Last Name: " << contacts[input[0] - '0'].getLastName() << "\n";
	std::cout << "Nickname: " << contacts[input[0] - '0'].getNickname() << "\n";
	std::cout << "Phone Number: " << contacts[input[0] - '0'].getPhoneNumber() << "\n";
	std::cout << "Darkest Secret: " << contacts[input[0] - '0'].getDarkestSecret() << "\n";

	return 1;
}
