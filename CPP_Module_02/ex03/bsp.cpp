/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:37:01 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/03 21:05:30 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed vec1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (point.getX() - a.getX()) * (b.getY() - a.getY());
    Fixed vec2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (point.getX() - b.getX()) * (c.getY() - b.getY());
    Fixed vec3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (point.getX() - c.getX()) * (a.getY() - c.getY());

    if (((vec1.getRawBits() > 0) &&(vec2.getRawBits() > 0) && (vec3.getRawBits() > 0) ) || ((vec1.getRawBits() < 0) &&(vec2.getRawBits() < 0) && (vec3.getRawBits() < 0) )) 
        return true;
    return false;
}