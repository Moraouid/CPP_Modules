/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:18:34 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/06 00:28:30 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
private:
    AForm *makeRobotForm(std::string target);
    AForm *makeShrubberyForm(std::string target);
    AForm *makePresidentialPardonForm(std::string target);

public:
    Intern();
    Intern(Intern const &other);
    Intern &operator=(Intern const &other);

    AForm *makeForm(std::string &formName, std::string &target);

    ~Intern();
};

#endif