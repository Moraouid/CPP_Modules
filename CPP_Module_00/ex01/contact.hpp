<<<<<<< HEAD
=======
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

>>>>>>> 952e0e5 (module00--done)

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
    void setFirstName(const std::string &input);
    std::string getFirstName() const;

    void setLastName(const std::string &input);
    std::string getLastName() const;

    void setNickname(const std::string &input);
    std::string getNickname() const;

    void setPhoneNumber(const std::string &input);
    std::string getPhoneNumber() const;

    void setDarkestSecret(const std::string &input);
    std::string getDarkestSecret() const;
};

#endif
