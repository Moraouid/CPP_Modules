/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:11:36 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 10:21:46 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap: Default Constructor called" << std::endl;
	name = "CJ";
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " Constructed" << std::endl;
	this->name = name;
	HP = 10;
	EP = 10;
	AD = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy Constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		HP = other.HP;
		EP = other.EP;
		AD = other.AD;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (HP > 0 && EP > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target
				  << ", causing " << AD << " points of damage!" << std::endl;
		EP--;
	}
	else
		std::cout << "ClapTrap " << name << " can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HP <= 0)
	{
		std::cout << "ClapTrap " << name << " is already dead" << std::endl;
		return;
	}
	HP -= amount;
	if (HP < 0)
		HP = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!"
			  << " hit point is " << HP << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HP > 0 && EP > 0)
	{
		EP--;
		HP += amount;
		std::cout << "ClapTrap " << name << " repairs itself, getting "
				  << amount << " hit points back! hit point is " << HP << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't safely repair!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called" << std::endl;
}
