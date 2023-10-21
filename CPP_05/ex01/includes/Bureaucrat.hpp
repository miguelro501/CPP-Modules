#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#define GRADE_MAX 150

class Bureaucrat
{
	public:

		//functions
		void incrementGrade();
		void decrementGrade();
		void signForm(const std::string formName, const bool sign, const std::string msg) const;

		//Getters/Setters
		const std::string getName() const;
		int getGrade() const;

		//OCF
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat(const std::string name,const int grade);
		~Bureaucrat();

		Bureaucrat &operator = (const Bureaucrat &other);

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
		int 				grade;
};

std::ostream    &operator<< (std::ostream &os, const Bureaucrat &other);
#endif