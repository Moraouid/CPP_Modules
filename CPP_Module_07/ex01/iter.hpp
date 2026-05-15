/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 15:34:41 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/15 18:34:15 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F>
void iter(T array[], const size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template <typename T, typename F>
void iter(const T array[], const size_t size, F func)
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}
#endif