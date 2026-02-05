/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:27:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/05 17:41:30 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    Bureaucrat boss("Boss", 1);
    Bureaucrat manager("Manager", 50);
    Bureaucrat intern("Intern", 150);

    ShrubberyCreationForm shrub("garden");
    RobotomyRequestForm robo("Bender");
    PresidentialPardonForm pardon("Arthur");

    std::cout << "=== Test 1: Execute unsigned form ===" << std::endl;
    try
    {
        shrub.execute(boss);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 2: Sign with low grade ===" << std::endl;
    try
    {
        intern.signForm(shrub);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 3: Sign and execute Shrubbery ===" << std::endl;
    try
    {
        manager.signForm(shrub);
        shrub.execute(manager);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Sign and execute Robotomy ===" << std::endl;
    try
    {
        manager.signForm(robo);
        robo.execute(manager);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 5: Sign and execute Presidential Pardon ===" << std::endl;
    try
    {
        boss.signForm(pardon);
        pardon.execute(boss);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

