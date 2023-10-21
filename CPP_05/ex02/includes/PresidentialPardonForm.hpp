#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		
		//Functions
		void	execute(const Bureaucrat &executor) const;

		//OCF
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm(const std::string target);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
	
	private:
		std::string target;
};

#endif