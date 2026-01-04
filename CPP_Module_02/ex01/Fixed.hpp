/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 10:39:24 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/04 23:51:46 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int number;
    static const int fract;

public:
    Fixed();
    Fixed(const int nb);
    Fixed(const float nb);
    Fixed(const Fixed &other);

    Fixed &operator=(const Fixed &other);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);


#endif