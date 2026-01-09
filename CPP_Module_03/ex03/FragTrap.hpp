/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:04:22 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/08 18:00:11 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual  public ClapTrap
{
public:
    FragTrap();
    FragTrap(const FragTrap &other);
    FragTrap(std::string name);
    FragTrap &operator=(const FragTrap &other);
    void highFivesGuys( void );
    ~FragTrap();
};

#endif