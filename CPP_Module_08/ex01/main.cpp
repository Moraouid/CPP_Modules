/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:39:17 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/22 00:39:34 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
    {
        Span sp = Span(5);

        try
        {

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            sp.addNumber(11);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    {
        Span sp = Span(10000);

        try
        {
            for (int i = 0; i < 10000; i++)
                sp.addNumber(i);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;

    {
        Span sp = Span(5);

        try
        {
            std::vector<int> v;
            for (int i = 0; i < 10; i++)
                v.push_back(i);
            sp.addNumber(v.begin(), v.end());
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }

    return 0;
}
