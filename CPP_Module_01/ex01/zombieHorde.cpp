/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:59:41 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 21:33:16 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *axeman = new Zombie[N];

    for(int i = 0; i < N; i++)
    {
        axeman[i].setName(name);
    }
    return axeman;
}
