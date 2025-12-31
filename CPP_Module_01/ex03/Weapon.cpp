/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 22:03:12 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 18:08:12 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::~Weapon(){}

std::string Weapon::getType(){
   return type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}

Weapon::Weapon( std::string type)
{
    this->type = type;
}