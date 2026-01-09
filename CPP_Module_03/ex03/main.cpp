/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 20:00:00 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/09 10:08:06 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

void printHeader(const std::string& text) {
    std::cout << "\n>>> " << text << " <<<" << std::endl;
}

int main()
{
    printHeader("SCENARIO START: The Duel on Pandora");

    std::cout << "\n[System] Spawning combatants..." << std::endl;
    DiamondTrap hero("Zero");
    DiamondTrap villain("Handsome Jack");

    printHeader("Round 1: First Blood");
    villain.attack("Zero");
    hero.takeDamage(30);

    printHeader("Round 2: Counter-Attack");
    std::cout << "[Narrator] Zero calculates a critical hit path..." << std::endl;
    hero.attack("Handsome Jack");
    villain.takeDamage(30);
    
    hero.attack("Handsome Jack");
    villain.takeDamage(30);

    printHeader("Round 3: Tactical Reset");
    std::cout << "[Narrator] Zero takes cover to recharge shields." << std::endl;
    hero.beRepaired(20); 

    printHeader("Round 4: The Final Blow");
    std::cout << "[Narrator] Handsome Jack tries to fire back but jams!" << std::endl;
    hero.attack("Handsome Jack");
    villain.takeDamage(30); 
    
    std::cout << "[Narrator] Zero delivers the Coup de Grâce." << std::endl;
    hero.attack("Handsome Jack");
    villain.takeDamage(50); 

    printHeader("Aftermath");
    std::cout << "[System] Checking vital signs..." << std::endl;
    villain.attack("Zero"); 
    villain.beRepaired(10); 

    printHeader("Victory Celebration");
    hero.highFivesGuys();

    printHeader("SCENARIO END");
    return 0;
}


