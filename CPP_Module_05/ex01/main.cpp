/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:27:37 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/18 16:27:37 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat test("Brahim", 1);
        std::cout << test << std::endl;
        
        test.incrementGrade();
        std::cout << test << std::endl;
        
        Bureaucrat norddin("norddin", 151);
    }
    catch (std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "----------------------------------"<< std::endl;

    try
    {
      Bureaucrat test("Simohammed", 50);
      std::cout << test << std::endl;
      
      test.decrementGrade();
        std::cout << test << std::endl;
      
      Bureaucrat norddin("norddin", 0);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    } 
}

