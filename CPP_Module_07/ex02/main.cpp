/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:59:45 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/15 18:34:32 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int main()
{
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = i;
        mirror[i] = i;
    }
    // SCOPE
    for (int i = 0; i < 5; i++)
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

    std::cout << std::endl;

    {
        Array<int> tmp = numbers;
        Array<int> copy(tmp);

        for (int i = 0; i < 5; i++)
            std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    std::cout << std::endl;

    try
    {
        numbers[-2] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    int j = 10;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = j++;
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }
    delete[] mirror; //
    return 0;
}