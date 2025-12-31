/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:18:06 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 23:09:18 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *axeman = zombieHorde(8, "Foo");
    if (!axeman)
        return 1;
    axeman[2].setName("Climbers");
    for (int i = 0; i < 8; i++)
        axeman[i].announce();
    return 0;
}
