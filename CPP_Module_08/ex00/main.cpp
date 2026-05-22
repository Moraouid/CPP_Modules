/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:04:49 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/18 05:12:50 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    std::vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);

    try
    {
        std::cout << "Looking for 20... " << std::endl;
        int n1 = *easyfind(nums, 20);
        std::cout << "Found: " << n1 << std::endl;

        std::cout << "Looking for 99... " << std::endl;
        int n2 = *easyfind(nums, 99);
        std::cout << "Found: " << n2 << std::endl; 
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

	std::cout << "-------------------------------" << std::endl;

	std::list<int> list;
	
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);

    try {
        std::cout << "Looking for 10... " << std::endl;
        int l1 = *easyfind(list, 10);
        std::cout << "Found: " << l1 << std::endl;

        std::cout << "Looking for 69... " << std::endl;
        int l2 = *easyfind(list, 69);
        std::cout << "Found: " << l2 << std::endl; 
    }
    catch(std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
