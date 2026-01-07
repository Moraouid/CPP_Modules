/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:36:29 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/07 19:45:01 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap1("Clap");
	ClapTrap clap2 = clap1;
	ClapTrap clap3;
	clap3 = clap1;

	clap1.attack("Target1");
	clap1.takeDamage(5);
	clap1.beRepaired(3);
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
