/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 22:30:59 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/07 17:55:44 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int HP;
    int EP;
    int AD;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ~ClapTrap();
};
