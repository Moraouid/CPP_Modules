/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:18:06 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 21:34:26 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *axeman = zombieHorde(5, "Foo");
    axeman[2].setName("zatais");
    for (int i = 0; i < 5; i++)
        axeman[i].announce();
    return 0;
}
