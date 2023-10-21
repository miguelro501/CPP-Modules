#pragma once

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		
		//Functions
		void	execute(const Bureaucrat &executor) const;

		//OCF
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm(const std::string target);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
	
	private:
		std::string target;
};

#endif