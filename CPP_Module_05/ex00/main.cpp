/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:27:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/03 17:56:13 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    std::cout << "=== Test 1: Valid Bureaucrat Creation ===" << std::endl;
    try 
    {
        Bureaucrat bob("Bob", 50);
        std::cout << bob;
    }
    catch (std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Grade Too High (0) ===" << std::endl;
    try
    {
        Bureaucrat invalid("Invalid", 0);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Grade Too Low (151) ===" << std::endl;
    try
    {
        Bureaucrat invalid("Invalid", 151);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Increment Grade ===" << std::endl;
    try
    {
        Bureaucrat alice("Alice", 100);
        std::cout << alice;
        alice.incrementGrade();
        std::cout << alice;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Decrement Grade ===" << std::endl;
    try
    {
        Bureaucrat charlie("Charlie", 100);
        std::cout << charlie;
        charlie.decrementGrade();
        std::cout << charlie;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 6: Increment at Grade 1 (should throw) ===" << std::endl;
    try
    {
        Bureaucrat boss("Boss", 1);
        std::cout << boss;
        boss.incrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 7: Decrement at Grade 150 (should throw) ===" << std::endl;
    try
    {
        Bureaucrat intern("Intern", 150);
        std::cout << intern;
        intern.decrementGrade();
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

