/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 18:50:30 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/13 01:00:02 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor called" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++)
	{
		if (other.slots[i])
			this->slots[i] = other.slots[i]->clone();
		else
			this->slots[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout << "Character parameterized constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		slots[i] = NULL;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (slots[i])
			{
				delete slots[i];
				slots[i] = NULL;
			}
			if (other.slots[i])
				this->slots[i] = other.slots[i]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const { return (this->name); }

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (slots[i] == NULL)
		{
			slots[i] = m;
			std::cout << "Equipped " << m->getType() << " in slot " << i << std::endl;
			return;
		}
	}
	delete m;
	std::cout << "No empty slot to equip " << m->getType() << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "invalid index" << std::endl;
		return;
	}
	if (slots[idx])
	{
		std::cout << "Unequipped " << slots[idx]->getType() << " from slot " << idx << std::endl;
		slots[idx] = NULL;
	}
	else
		std::cout << "Slot " << idx << " is already empty" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "invalid index" << std::endl;
		return;
	}
	if (slots[idx])
		slots[idx]->use(target);
	else
		std::cout << "No materia in slot " << idx << " to use" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (slots[i])
		{
			delete slots[i];
			slots[i] = NULL;
		}
	}
}
