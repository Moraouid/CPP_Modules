/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 17:33:51 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/03 21:06:21 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed point_x, const Fixed point_y) : x(point_x), y(point_y) {}

Point::Point(const Point &other) : x(other.x), y(other.y)
{
    // *this = other;
}

Point &Point::operator=(const Point &other)
{
    (void)other;
    return *this;
}

Fixed Point::getX() const
{
    return x;
}
Fixed Point::getY() const
{
    return y;
}

Point::~Point() {}
