/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:18:06 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 23:26:01 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie axeman("Boo");
    axeman.announce();

    Zombie *zm = newZombie("Fooooooooo");
    zm->announce();
    
    randomChump("Foo");
    
    delete zm;

    return 0;
}
