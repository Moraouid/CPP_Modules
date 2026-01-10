/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:53:26 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/10 21:41:31 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default Constractorlt" << std::endl;
	type = "Cat";
	ideas = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	this->type = other.type;
	this->ideas = new Brain(*other.ideas);
}


Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if(this != &other)
	{
		this->type = other.type;
		
		////delete ideas;
		//this->ideas = new Brain(*other.ideas);

		//*this->ideas = *other.ideas;
	}
	return  *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;	
	delete ideas;
}
