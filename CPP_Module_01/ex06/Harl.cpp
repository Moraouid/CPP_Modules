/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 22:02:13 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 22:55:16 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n"
			  << "I really do!\n";
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
			  << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\n"
			  << "I’ve been coming for years, whereas you started working here just last month.\n";
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	int index = -1;
	void (Harl::*funcToLevel[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			index = i;

	switch (index)
	{
	case 0:
		(this->*funcToLevel[0])();
		(this->*funcToLevel[1])();
		(this->*funcToLevel[2])();
		(this->*funcToLevel[3])();
		break;
	case 1:
		(this->*funcToLevel[1])();
		(this->*funcToLevel[2])();
		(this->*funcToLevel[3])();
		break;
	case 2:
		(this->*funcToLevel[2])();
		(this->*funcToLevel[3])();
		break;
	case 3:
		(this->*funcToLevel[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
