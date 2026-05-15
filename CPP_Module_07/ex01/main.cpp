/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo < sel-abbo@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:11:23 by sel-abbo          #+#    #+#             */
/*   Updated: 2026/05/15 10:02:00 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void incrementElement(int &element)
{
	element++;
}

void printElement(const int &element)
{
	std::cout << element << " ";
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	std::cout << "before: ";
	iter(arr, 5, printElement);
	std::cout << std::endl;

	iter(arr, 5, incrementElement);

	std::cout << "after:  ";
	iter(arr, 5, printElement);
	std::cout << std::endl;
	return 0;
}
