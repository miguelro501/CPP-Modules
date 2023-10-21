#pragma once
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	public:
		//Functions
		void addNumber(int nbr);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);

		//OCF
		Span();
		Span(unsigned int n);
		Span(const Span &other);
		~Span();

		Span &operator = (const Span &other);
		
		//Execptions
		class SpanIsFullExecption : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class SizeTooSmallExecption : public std::exception
		{
			public:
				const char* what() const throw();
		};
	private:
		unsigned int		size;
		std::vector<int>	it;
};
#endif