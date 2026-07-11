/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:12:25 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/25 19:12:26 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(std::string input)
{
	firstName = input;
}
std::string Contact::getFirstName() const
{
	return (firstName);
}
void Contact::setLastName(std::string input)
{
	lastName = input;
}
std::string Contact::getLastName() const
{
	return (lastName);
}
void Contact::setNickname(std::string input)
{
	nickname = input;
}
std::string Contact::getNickname() const
{
	return (nickname);
}
void Contact::setPhoneNumber(std::string input)
{
	phoneNumber = input;
}
std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}
void Contact::setDarkestSecret(std::string input)
{
	darkestSecret = input;
}
std::string Contact::getDarkestSecret() const
{
	return (darkestSecret);
}
