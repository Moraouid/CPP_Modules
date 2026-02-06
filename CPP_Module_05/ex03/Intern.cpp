/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:34:09 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/06 00:31:24 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other) { (void)other; }

Intern &Intern::operator=(Intern const &other)
{
    (void)other;
    return *this;
}

AForm *Intern::makeForm(std::string &formName, std::string &target)
{
    AForm *(Intern::*creators[3])(std::string) = {
        &Intern::makeShrubberyForm,
        &Intern::makeRobotForm,
        &Intern::makePresidentialPardonForm};

    std::string names[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (formName == names[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*creators[i])(target);
        }
    }

    std::cout << "Intern cannot create " << formName << std::endl;
    return NULL;
}

AForm *Intern::makeShrubberyForm(std::string target) { return new ShrubberyCreationForm(target); }
AForm *Intern::makeRobotForm(std::string target) { return new RobotomyRequestForm(target); }
AForm *Intern::makePresidentialPardonForm(std::string target) { return new PresidentialPardonForm(target); }

Intern::~Intern() {}