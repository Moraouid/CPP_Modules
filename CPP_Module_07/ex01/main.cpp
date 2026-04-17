/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:11:23 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/04/17 19:21:43 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void incrementElement(int &element)
{
	element++;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Original array: ";
	for (size_t i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	iter(arr, size, incrementElement);

	std::cout << "Modified array: ";
	for (size_t i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	return 0;
}
