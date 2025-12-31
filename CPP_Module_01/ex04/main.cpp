/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 19:19:16 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 21:46:33 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replceStringInFile(std::string &buffer, std::string s1, std::string s2)
{
   size_t pos = buffer.find(s1);
   while(pos != std::string::npos)
   {
        buffer.erase(pos, s1.length());
        buffer.insert(pos, s2);
        pos += s1.length();
        pos = buffer.find(s1, pos);
   }
}

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cout << "Usage: ./replace <filename> <s1> <s2>\n";
        return 1;
    }
    std::string infile = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string buffer;
    
    if(s1.empty())
        return 1;
    std::ifstream input(av[1]);
    std::ofstream output((infile + ".replace").c_str());
    if(!input.is_open() || !output.is_open())
    {
        std::cout << "cannot open file" << std::endl;
        return 1;
    }
    std::getline(input, buffer, '\0');
    replceStringInFile(buffer, s1, s2);
    output << buffer;
}
