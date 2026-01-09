/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:04:22 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 18:06:38 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :virtual  public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap(std::string name);
    ScavTrap &operator=(const ScavTrap &other);
    void attack(const std::string &target);
    void guardGate();
    ~ScavTrap();
};

#endif