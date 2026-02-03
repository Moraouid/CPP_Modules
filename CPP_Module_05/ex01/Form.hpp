/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:32:39 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/03 16:59:16 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
private:
    const std::string name;
    bool              _signed;
    const int         gradeToSign;
    const int         gradeToExecute;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    
    Form();
    Form(Form const &other);
    Form(std::string const &n, int s, int e);
    Form &operator=(Form const &other);
    
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    
    void beSigned(Bureaucrat const& b);
    
    ~Form();
};

std::ostream &operator<<(std::ostream &out, Form const &from);

#endif
