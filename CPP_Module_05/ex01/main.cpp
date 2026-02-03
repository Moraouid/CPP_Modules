/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:27:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/03 17:54:42 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "=== Test 1: Valid Form Creation ===" << std::endl;
    try
    {
        Form form1("Tax Form", 50, 25);
        std::cout << form1 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Invalid Form (grade too high) ===" << std::endl;
    try
    {
        Form form2("Invalid Form", 0, 50);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Invalid Form (grade too low) ===" << std::endl;
    try
    {
        Form form3("Invalid Form", 151, 50);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Bureaucrat Signs Form Successfully ===" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 30);
        Form form4("Report", 50, 25);
        
        std::cout << bob;
        std::cout << form4 << std::endl;
        
        bob.signForm(form4);
        std::cout << form4 << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Bureaucrat Cannot Sign Form (grade too low) ===" << std::endl;
    try
    {
        Bureaucrat intern("Intern", 100);
        Form form5("Secret Document", 10, 5);
        
        std::cout << intern;
        std::cout << form5 << std::endl;
        
        intern.signForm(form5);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

