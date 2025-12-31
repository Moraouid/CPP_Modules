/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:33:00 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 18:49:05 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &type)
{
    this->type = &type;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << type->getType() << std::endl; 
}

