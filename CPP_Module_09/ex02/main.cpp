/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:14:57 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/06/19 04:56:30 by sel-abbo         ###   ########.fr       */
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
		sorter.sortData();
		sorter.printResults(argv, argc);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error" << std::endl; 
        return 1;
    }

    return 0;
}