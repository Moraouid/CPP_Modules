/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:39:17 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/03 13:35:21 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    number = 0;
}

Fixed::Fixed(const Fixed &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int nb)
{
    // std::cout << "Int constructor called" << std::endl;
    number = nb << fract;
}

Fixed::Fixed(const float nb)
{
    // std::cout << "Float constructor called" << std::endl;
    number = roundf(nb * (1 << fract));
}

Fixed &Fixed::operator=(const Fixed &other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    number = other.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &other)
{
    out << other.toFloat();
    return out;
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed res;

    res.setRawBits(number + other.number);
    return res;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed res;

    res.setRawBits(number - other.number);
    return res;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed res;

    res.setRawBits((number * other.number) >> fract);
    return res;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed res;

    res.setRawBits((number << fract) / other.number);
    return res;
}
Fixed &Fixed::operator++()
{
    number++;
    return *this;
}

Fixed &Fixed::operator--()
{
    number--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;

    number++;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;

    number--;
    return tmp;
}

bool Fixed::operator>(const Fixed &other)
{
    return number > other.number;
}

bool Fixed::operator<(const Fixed &other)
{
    return number < other.number;
}

bool Fixed::operator>=(const Fixed &other)
{
    return number >= other.number;
}

bool Fixed::operator<=(const Fixed &other)
{
    return number <= other.number;
}

bool Fixed::operator!=(const Fixed &other)
{
    return number != other.number;
}

int Fixed::getRawBits(void) const
{
    return number;
}

void Fixed::setRawBits(int const raw)
{
    number = raw;
}

float Fixed::toFloat() const
{
    return (float)number / (1 << fract);
}

int Fixed::toInt() const
{
    return number >> fract;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() < f2.getRawBits())
        return f1;
    return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    return f2;
}
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.getRawBits() > f2.getRawBits())
        return f1;
    return f2;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}
