/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:26:23 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/10 21:51:45 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j; 
    delete i;
    
	std::cout << "---------------------" << std::endl;

    int size = 10;
    Animal* animals[size];
    for (int i = 0; i < size; i++) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
	
	std::cout << "---------------------" << std::endl;
    
	for (int i = 0; i < size; i++) {
        delete animals[i];
    }
    
	std::cout << "---------------------" << std::endl;

    Dog basic;
    Dog tmp = basic;

    return 0;
}
