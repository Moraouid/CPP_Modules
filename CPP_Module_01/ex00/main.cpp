/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:18:06 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 19:32:41 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie axeman("Boo");
    axeman.announce();

    Zombie *said = newZombie("Fooooooooo");
    said->announce();
    
    randomChump("Foo");
    
    delete said;

    return 0;
}
