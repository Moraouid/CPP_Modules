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
        Bureaucrat brahim("Brahim", 1);
        std::cout << brahim << std::endl;
        
        brahim.incrementGrade();
        std::cout << brahim << std::endl;
        
        Bureaucrat norddin("norddin", 151);
    }
    catch (std::exception& e) 
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "----------------------------------"<< std::endl;

    try
    {
      Bureaucrat simohammed("Simohammed", 50);
      std::cout << simohammed << std::endl;
      
      simohammed.decrementGrade();
      std::cout << simohammed << std::endl;
      
      Bureaucrat norddin("norddin", 0);
    }
    catch (std::exception& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    } 
}

