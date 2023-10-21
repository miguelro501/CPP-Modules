#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public:
		
		//Getters/Setters
		const	std::string getName() const;
		int		getGradeSign() const;
		int		getGradeExec() const;
		bool	getSign() const;
		void	beSigned(const Bureaucrat &b);

		//OCF
		Form();
		Form(const Form &other);
		Form(const std::string name,const int gradeSign, const int gradeExec);
		~Form();

		Form &operator = (const Form &other);

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

	private:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExec;
		bool				sign;
};

std::ostream    &operator<< (std::ostream &os, const Form &other);
#endif
