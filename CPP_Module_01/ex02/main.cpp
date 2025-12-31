/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 21:37:24 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/30 21:48:27 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address of the string stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address of the string stringREF: " << &stringREF << std::endl;
    
    std::cout << "The value of the string variable: " << str << std::endl;
    std::cout << "The value of the string stringPTR: " << *stringPTR<< std::endl;
    std::cout << "The value of the string stringREF: " << stringREF << std::endl;

    return 0;
}