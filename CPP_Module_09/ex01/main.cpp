#include <iostream>
#include "RPN.hpp"


int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " <RPN expression>" << std::endl;
		return 1;
	}

	RPN rpn;
	try{
		rpn.executeExpression(av[1]);
		std::cout << rpn.getStack().top() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	return 0;
}