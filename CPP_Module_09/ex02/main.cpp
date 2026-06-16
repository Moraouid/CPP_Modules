/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:14:57 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/16 05:08:20 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cerr << "Usage: " << argv[0] << " <numbers...>" << std::endl;
        return 1;
    }

    PmergeMe sorter;

    try
    {
        sorter.processInput(argc, argv);
        std::cout << "--- SUCCESS! Input parsed perfectly ---" << std::endl;
        sorter.printResults();
    }
    catch (const std::exception &e)
    {
        // This catches every 'throw std::exception()' from your processInput
        std::cerr << "Error" << std::endl; 
        return 1;
    }

    return 0;
}