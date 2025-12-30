/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:47:17 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 19:23:32 by sel-abbo         ###   ########.fr       */
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
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);


#endif
