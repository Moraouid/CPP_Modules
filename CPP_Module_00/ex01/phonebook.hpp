<<<<<<< HEAD
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 19:13:40 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/29 11:49:48 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> 952e0e5 (module00--done)
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
<<<<<<< HEAD
#include <string.h>
=======
#include <iomanip>
#include <iostream>
>>>>>>> 952e0e5 (module00--done)

class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
        int count;
    public:
        void addContact();
        void searchContact();
};

#endif
