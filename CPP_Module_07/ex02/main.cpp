#include <cstdlib>
#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> numbers(5);
	Array<int> rands(5);

	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i;
		rands[i] = rand();
	}

	Array<int> copy(numbers);
	Array<int> assign = rands;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	}

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << "Accessing out of bounds..." << std::endl;
		numbers[10] = 0;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}