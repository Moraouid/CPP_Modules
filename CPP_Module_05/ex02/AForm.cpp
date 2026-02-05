/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 20:14:56 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/04 20:50:30 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what() const throw() { return "Grade is too high!"; }
const char* AForm::GradeTooLowException::what() const throw() { return "Grade is too low!"; }
const char* AForm::FormNotSignedException::what() const throw() { return "Form is not signed!"; }


AForm::AForm() : name("CJ"), _signed(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(AForm const &other) : name(other.name), _signed(other._signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {}

AForm::AForm(std::string const &n, int s, int e) : name(n), _signed(false), gradeToSign(s), gradeToExecute(e)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}

AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
        _signed = other._signed;
    return *this;
}

std::string AForm::getName() const { return name; }
bool AForm::getIsSigned() const { return _signed; }
int AForm::getGradeToSign() const { return gradeToSign; }
int AForm::getGradeToExecute() const { return gradeToExecute; }

void AForm::beSigned(Bureaucrat const &b)
{
    if (b.getGrade() > gradeToSign)
        throw(AForm::GradeTooLowException());
    _signed = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
    if(!_signed)
        throw FormNotSignedException();
    if(executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();
    executeAction();
}

AForm::~AForm() {}

std::ostream &operator<<(std::ostream &out, AForm const &form)
{
    out << "Form" << form.getName() << ", signed: " << form.getIsSigned()
        << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: "
        << form.getGradeToExecute();

    return out;
}
