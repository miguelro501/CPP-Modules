#pragma once
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <cstring>
#include <cstdlib>

class RPN
{
	public:

		//Functions
		int calculateRPN(const std::string expression);
	
		//OCF
		RPN();
		RPN(const RPN &other);
		~RPN();
		RPN &operator=(const RPN &other);

	private:
};

#endif