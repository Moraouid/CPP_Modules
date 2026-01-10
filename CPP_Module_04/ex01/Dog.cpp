/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:54:21 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/10 21:01:50 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constractor" << std::endl;
	type = "Dog";
	ideas = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	this->type = other.type;
	this->ideas = new Brain(*other.ideas);
}


Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
		delete ideas;
		this->ideas = new Brain(*other.ideas);
	}
	return  *this;
}

void Dog::makeSound() const
{
	std::cout << "Barking" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete ideas;
}
