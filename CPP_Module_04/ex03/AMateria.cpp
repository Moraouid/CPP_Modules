/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:14:01 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/12 22:54:10 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	this->type = other.type;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria parameterized constructor called" << std::endl;
	this->type = type;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter &target) { (void)target; }

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}
