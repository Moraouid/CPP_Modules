/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 05:51:54 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/26 04:48:13 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

	BitcoinExchange bitcoinExchange;
	bitcoinExchange.loadDatabase("data.csv");
	bitcoinExchange.processInput(av[1]);

	return 0;
}
