#include "PmergeMe.hpp"

//Functions

int isPosNumber(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[0] == '+')
			continue;
		if (!isdigit(str[i]) && str[i] != '-')
			return false;
	}
	return true;
}

bool intInVector(int num, std::vector<int> &vector)
{
	for (long unsigned int i = 0; i < vector.size(); i++)
	{
		if (vector[i] == num)
			return true;
	}
	return false;
}

bool PmergeMe::initialize(char **inputs, int size)
{
	for (int i = 1; inputs[i]; i++)
	{
		if (isPosNumber(inputs[i]))
		{
			int num = atoi(inputs[i]);
			if (intInVector(num, vectorSequence))
				return false;
			vectorSequence.push_back(num);
			listSequence.push_back(num);

		}
		else
			return false;
	}
	sizeSequence = size - 1;
	return true;
}

double PmergeMe::sortVector()
{
	clock_t start = clock();
	
	clock_t end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

double PmergeMe::sortList()
{
	clock_t start = clock();
	
	clock_t end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

void PmergeMe::displayResults()
{
    std::cout << "Before: ";
    for (long unsigned int i = 0; i < vectorSequence.size(); i++)
        std::cout << vectorSequence[i] << " ";
    std::cout << "\nAfter: ";
	double listTime = sortList();
	double vectorTime = sortVector();
	for (long unsigned int i = 0; i < vectorSequence.size(); i++)
        std::cout << vectorSequence[i] << " ";
	std::cout << "\nTime to process a range of " << this->sizeSequence << " elements with std::list : " << listTime << "ms\n";
	std::cout << "Time to process a range of " << this->sizeSequence << " elements with std::vector : " << vectorTime << "ms\n";
}

//OCF
PmergeMe::PmergeMe() {}


PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}   

PmergeMe::~PmergeMe() {}


PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	if (this == &other)
		return (*this);
	*this = other;
	return (*this);
}