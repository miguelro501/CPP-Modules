#pragma once

#ifndef INTER_HPP
#define INTER_HPP

#include <iostream>
class AForm;

class Intern
{
	public:
		//Functions
        AForm*   makeForm(std::string name, std::string target);

		//OCF
		Intern &operator=(const Intern &other);
		Intern(const Intern &other);
		Intern();
		~Intern();
};
#endif