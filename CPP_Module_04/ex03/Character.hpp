/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:36:04 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/01/13 01:25:39 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"


class Character : public ICharacter
{
private:
	std::string name;
	AMateria *slots[4];
public:
	Character();
	Character(const Character &other);
	Character(std::string name);
	Character &operator=(const Character &other);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character();
};

#endif
