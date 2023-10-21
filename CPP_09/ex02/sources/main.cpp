#include "PmergeMe.hpp"

int main(int ac, char **av) 
{
	if (ac < 2)
	{
		std::cout << "Error: Invalid parameters\n";
		return (1);
	}
	PmergeMe merge;
	if (!merge.initialize(av, ac))
	{
		std::cout << "Error: Invalid parameters\n";
		return (1);
	}
	merge.displayResults();
	return (0);
}