/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:37:01 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/05 00:28:37 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed det(Point const p1, Point const p2, Point const p3)
{
    return (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - (p3.getX() - p1.getX()) * (p2.getY() - p1.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed vec1 = det(a, b, point);
    Fixed vec2 = det(b, c, point);
    Fixed vec3 = det(c, a, point);

    if ((vec1.getRawBits() > 0) && (vec2.getRawBits() > 0) && (vec3.getRawBits() > 0))
        return true;
    if ((vec1.getRawBits() < 0) && (vec2.getRawBits() < 0) && (vec3.getRawBits() < 0))
        return true;
    return false;
}
