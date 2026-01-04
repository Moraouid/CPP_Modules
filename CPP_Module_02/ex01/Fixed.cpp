/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:39:17 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/05 00:38:56 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fract = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int nb)
{
   std::cout << "Int constructor called" << std::endl;
   number = nb << fract; 
}

Fixed::Fixed(const float nb)
{
   std::cout << "Float constructor called" << std::endl;
   number = roundf(nb * (1 << fract));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    number = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return number;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    number = raw;
}

float Fixed::toFloat() const
{
    return (float)number / (1 << fract);
}

int Fixed::toInt() const
{
    return number >> 8;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
