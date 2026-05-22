/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:04:53 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/18 05:11:45 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>

class NotFoundException : public std::exception
{
public:
    const char *what() const throw();
};

const char *NotFoundException::what() const throw(){return "Not found!"; }


template <typename T>
typename T::iterator easyfind(T &con, int value)
{
	typename T::iterator it = std::find(con.begin(), con.end(), value);
	if(it == con.end())
		throw NotFoundException();
	return it;
}

#endif