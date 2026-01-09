/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 18:08:39 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 21:08:24 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap: constructor called" << std::endl;
    name = "CJ";
    ClapTrap::name = "CJ_clap_name";
    this->EP = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
    std::cout << "DiamondTrap: Copy Constructor called" << std::endl;
    this->name = other.name;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap " << name << " Constructed" << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->EP = 50;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        ClapTrap::name = other.name + "_clap_name";
        HP = other.HP;
        EP = other.EP;
        AD = other.AD;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "name ClapTrap is " << ClapTrap::name
              << " name is " << name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called" << std::endl;
}
