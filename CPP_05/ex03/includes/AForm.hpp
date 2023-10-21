#pragma once

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	public:
		
		//Functions
		virtual void execute(Bureaucrat const &executor) const = 0;
	
		//Getters/Setters
		const	std::string getName() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		bool	getSign() const;
		void	beSigned(const Bureaucrat &b);

		//OCF
		AForm();
		AForm(const AForm &other);
		AForm(const std::string name,const int gradeSign, const int gradeExec);
		virtual ~AForm();

		AForm &operator = (const AForm &other);

		//Execptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	protected:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExec;
		bool				sign;
};

std::ostream    &operator<< (std::ostream &os, const AForm &other);
#endif
