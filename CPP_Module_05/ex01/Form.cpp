/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:50:42 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/02/03 17:53:30 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}

Form::Form():name("CJ"), _signed(false), gradeToSign(150), gradeToExecute(150){}

Form::Form(Form const &other): name(other.name), _signed(other._signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute){} 

Form::Form(std::string const &n, int s, int e): name(n), _signed(false), gradeToSign(s), gradeToExecute(e)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw GradeTooLowException();
}


Form &Form::operator=(const Form &other)
{
  if (this != &other)
    _signed = other._signed;
  return *this;
}

std::string Form::getName() const {return name;}
bool Form::getIsSigned() const {return _signed;}
int Form::getGradeToSign() const {return gradeToSign;}
int Form::getGradeToExecute() const {return gradeToExecute;}

void	Form::beSigned(Bureaucrat const &b)
{
	if (b.getGrade() > gradeToSign)
		throw (Form::GradeTooLowException());
	_signed = true;
}

Form::~Form(){}

std::ostream& operator<<(std::ostream& out, Form const& f)
{
    out << "Form \"" << f.getName() << "\""
        << " | signed: " << (f.getIsSigned() ? "true" : "false")
        << " | grade to sign: " << f.getGradeToSign()
        << " | grade to execute: " << f.getGradeToExecute();
    return out;
}
