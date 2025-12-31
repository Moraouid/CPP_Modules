/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 22:21:35 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 22:56:16 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Usage: ./harlFilter <level>\n";   
        return 1;
    }

    Harl harl;

    harl.complain(av[1]);
}