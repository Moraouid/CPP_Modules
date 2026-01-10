/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:59:23 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/10 19:06:51 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default Constractor" << std::endl;
	type = "animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &ohter)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	this->type = ohter.type;
}


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ohter)
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if(this != &ohter)
		this->type = ohter.type;
	return  *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Can't make a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;	
}