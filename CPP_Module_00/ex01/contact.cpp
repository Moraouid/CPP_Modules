/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 05:54:12 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/24 05:54:14 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::setFirstName(const std::string &input)
{
	firstName = input;
}
std::string Contact::getFirstName() const
{
	return (firstName);
}
void Contact::setLastName(const std::string &input)
{
	lastName = input;
}
std::string Contact::getLastName() const
{
	return (lastName);
}
void Contact::setNickname(const std::string &input)
{
	nickname = input;
}
std::string Contact::getNickname() const
{
	return (nickname);
}
void Contact::setPhoneNumber(const std::string &input)
{
	phoneNumber = input;
}
std::string Contact::getPhoneNumber() const
{
	return (phoneNumber);
}
void Contact::setDarkestSecret(const std::string &input)
{
	darkestSecret = input;
}
std::string Contact::getDarkestSecret() const
{
	return (darkestSecret);
}
