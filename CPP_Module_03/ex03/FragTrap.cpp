/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:04:19 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 11:37:24 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap: Default Constructor called" << std::endl;
    HP = 100;
    EP = 100;
    AD = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap: Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " Constructed" << std::endl;
    HP = 100;
    EP = 100;
    AD = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        HP = other.HP;
        EP = other.EP;
        AD = other.AD;
    }
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests high-fives!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}
