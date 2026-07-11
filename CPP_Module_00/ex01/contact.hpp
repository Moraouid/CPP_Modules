/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:12:27 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/29 11:50:00 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    void setFirstName(std::string input);
    std::string getFirstName() const;

    void setLastName(std::string input);
    std::string getLastName() const;

    void setNickname(std::string input);
    std::string getNickname() const;

    void setPhoneNumber(std::string input);
    std::string getPhoneNumber() const;

    void setDarkestSecret(std::string input);
    std::string getDarkestSecret() const;
};

#endif
