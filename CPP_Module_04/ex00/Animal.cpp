/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:47:35 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/13 00:57:24 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constractor" << std::endl;
	type = "animal";
}

Animal::Animal(const Animal &ohter)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	this->type = ohter.type;
}

Animal &Animal::operator=(const Animal &ohter)
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &ohter)
		this->type = ohter.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "Can't make a sound" << std::endl;
}

std::string Animal::getType() const { return type; }

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}