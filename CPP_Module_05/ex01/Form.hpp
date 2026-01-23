/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:32:39 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/19 17:32:39 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <ostream>

class Form
{
    private:
        const std::string name;
        bool signed;
        const int gradeSing;
        const int gradeExecute;
    public:
        void beSigned(Bureaucrat bureaucrat);
};


std::ostream &operator<<(std::ostream &out, const Form &f);

#endif // !Form_HPP
