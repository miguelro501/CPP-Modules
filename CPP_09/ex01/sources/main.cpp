#include "RPN.hpp"

int main(int ac, char **av) 
{
	if (ac != 2)
	{
		std::cout << "Error: Invalid parameters\n";
		return (1);
	}
	RPN rpn;
	int result = rpn.calculateRPN(av[1]);
    if (result != -1)
	{
    	std::cout << result << "\n";
	}
	return (0);
}