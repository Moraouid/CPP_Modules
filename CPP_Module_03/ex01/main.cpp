/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:36:29 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/07 22:32:53 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap clap1("Clap");
	ScavTrap clap2 = clap1;
	ScavTrap clap3;
	clap3 = clap1;

	clap1.attack("Target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.guardGate();
	std::cout << std::endl;
	clap2.attack("Target2");
	clap2.takeDamage(15);
	clap2.beRepaired(10);
	std::cout << std::endl;
	clap3.attack("Target3");
	clap3.takeDamage(8);
	clap3.beRepaired(5);

	return 0;
}
