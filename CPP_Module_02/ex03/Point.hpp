/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:11:21 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/03 21:04:42 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP


#include "Fixed.hpp"

class Point
{
private:
    const Fixed x;
    const Fixed y;
public:
    Point();
    Point(const Fixed point_x, Fixed const point_y);
    Point(const Point &other);
    Point &operator=(const Point &other);

    Fixed getX() const;
    Fixed getY() const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif