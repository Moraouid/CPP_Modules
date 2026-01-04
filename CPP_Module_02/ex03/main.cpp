/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:32:04 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/05 00:42:10 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(2, 3);
    Point point1(3, 4);
    Point point2(2, 2);

    if (bsp(a, b, c, point1))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;

    if (bsp(a, b, c, point2))
        std::cout << "inside" << std::endl;
    else
        std::cout << "outside" << std::endl;
}
