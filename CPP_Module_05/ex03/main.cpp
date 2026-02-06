/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:27:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/06 01:16:21 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Intern someIntern;
    Bureaucrat boss("Boss", 1);
    AForm *form = NULL;

    std::cout << "=== Test 1: Create and execute Shrubbery Form ===" << std::endl;
    std::string shrubberyName = "shrubbery creation";
    std::string target1 = "garden";
    form = someIntern.makeForm(shrubberyName, target1);
    if (form)
    {
        boss.signForm(*form);
        form->execute(boss);
        delete form;
    }

    std::cout << "\n=== Test 2: Create and execute Robotomy Form ===" << std::endl;
    std::string robotomyName = "robotomy request";
    std::string target2 = "Bender";
    form = someIntern.makeForm(robotomyName, target2);
    if (form)
    {
        boss.signForm(*form);
        form->execute(boss);
        delete form;
    }

    std::cout << "\n=== Test 3: Create and execute Presidential Pardon Form ===" << std::endl;
    std::string pardonName = "presidential pardon";
    std::string target3 = "Arthur";
    form = someIntern.makeForm(pardonName, target3);
    if (form)
    {
        boss.signForm(*form);
        form->execute(boss);
        delete form;
    }

    std::cout << "\n=== Test 4: Invalid Form Name ===" << std::endl;
    std::string invalidName = "invalid form";
    std::string target4 = "nobody";
    form = someIntern.makeForm(invalidName, target4);
    if (form)
        delete form;

    return 0;
}

