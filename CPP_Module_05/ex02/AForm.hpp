/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:15:27 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/04 19:43:20 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <exception>
#include <iosfwd>

#include "Bureaucrat.hpp"

class AForm
{
private:
    const std::string name;
    bool _signed;
    const int gradeToSign;
    const int gradeToExecute;

protected:
    virtual void executeAction() const = 0;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class FormNotSignedException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    AForm();
    AForm(AForm const &other);
    AForm(std::string const &n, int s, int e);
    AForm &operator=(AForm const &other);

    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void beSigned(Bureaucrat const &b);
    void execute(Bureaucrat const &executor) const;

    virtual ~AForm();
};

std::ostream &operator<<(std::ostream &out, AForm const &f);

#endif
