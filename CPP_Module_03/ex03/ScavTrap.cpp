/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:04:19 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 11:36:44 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap: Default Constructor called" << std::endl;
    HP = 100;
    EP = 50;
    AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap: Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " Constructed" << std::endl;
    HP = 100;
    EP = 50;
    AD = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        HP = other.HP;
        EP = other.EP;
        AD = other.AD;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (HP > 0 && EP > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target
                  << ", causing " << AD << " points of damage!" << std::endl;
        EP--;
    }
    else
        std::cout << "ClapTrap " << name << " can't attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << "now in Gatekeeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}
