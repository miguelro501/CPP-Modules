#pragma once

#ifndef SHRUBBERYCREATUINFORM_HPP
#define SHRUBBERYCREATUINFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
		
		//Functions
		void	execute(const Bureaucrat &executor) const;

		//OCF
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm(const std::string target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator = (const ShrubberyCreationForm &other);
	
	private:
		std::string target;
};

#endif