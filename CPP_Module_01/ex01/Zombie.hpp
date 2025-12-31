/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:47:17 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 21:27:21 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HHP
#define ZOMBIE_HHP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setName(std::string name);
    void announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif
