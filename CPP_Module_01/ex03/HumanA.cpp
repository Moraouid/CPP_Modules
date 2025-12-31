/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 17:28:03 by sel-abbo          #+#    #+#             */
/*   Updated: 2025/12/31 18:57:23 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &type): type(type) {
    this->name = name;
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << type.getType() << std::endl; 
}

