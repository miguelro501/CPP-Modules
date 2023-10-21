#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <string>
#include <cstring>
#include <cstdlib>

class PmergeMe
{
	public:

		//Functions
		bool initialize(char **inputs, int size);
    	double sortVector();
		double sortList();
    	void displayResults();
	
		//OCF
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe &other);

	private:
		std::vector<int>	vectorSequence;
		std::list<int>		listSequence;
		int					sizeSequence;

};

#endif