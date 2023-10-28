#include "PmergeMe.hpp"
#include "algorithm"

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

	std::vector<int>			main;
	std::vector<int>			pend;
	std::vector<int>::iterator	itMain;
	std::vector<int>::iterator	itPend;

	for (int i = 0; i < sizeSequence - 1; i+=2)
	{
		if (vectorSequence[i] < vectorSequence[i + 1])
		{
			main.push_back(vectorSequence[i + 1]);
			pend.push_back(vectorSequence[i]);
		}
		else
		{
			main.push_back(vectorSequence[i]);
			pend.push_back(vectorSequence[i + 1]);
		}
	}
	if (sizeSequence % 2 != 0)
        main.push_back(vectorSequence[sizeSequence - 1]);

	std::sort(main.begin(), main.end());
	std::sort(pend.begin(), pend.end());

	main.insert(main.end(), pend.begin(), pend.end());

	std::sort(main.begin(), main.end());
	this->vectorSequence = main;
	
	clock_t end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

double PmergeMe::sortList()
{
    clock_t start = clock();
    
    std::list<int> main;
    std::list<int> pend;
    std::list<int>::iterator it = listSequence.begin();
    std::list<int>::iterator nextIt = it;
    ++nextIt;
    while (nextIt != listSequence.end() && it != listSequence.end())
	{
        int current = *it;
        int next = *nextIt;

		if (current < next)
		{
        	main.push_back(next);
        	pend.push_back(current);
		}
		else
		{
			main.push_back(current);
        	pend.push_back(next);
		}
        ++it;
        ++it;
        nextIt = it;
        ++nextIt;
    }
	if (it != listSequence.end())
        main.push_back(*it);

    main.sort();
    pend.sort();

    main.insert(main.end(), pend.begin(), pend.end());

    main.sort();
    this->listSequence = main;
    clock_t end = clock();
    return (static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000);
}

void PmergeMe::displayResults()
{
    std::cout << "Before: ";
	std::vector<int>::iterator it;
    for (it = vectorSequence.begin(); it != vectorSequence.end(); it++)
        std::cout << *it << " ";
    std::cout << "\nAfter: ";
	double listTime = sortList();
	double vectorTime = sortVector();
	for (it = vectorSequence.begin(); it != vectorSequence.end(); it++)
        std::cout << *it << " ";
	/* std::cout << "\n";
	for (it = vectorSequence.begin(); it != vectorSequence.end(); it++)
        std::cout << *it << " "; */
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