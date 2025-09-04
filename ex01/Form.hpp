#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		Form(const std::string name, int signGrade, int execGrade);
		Form(const Form& copy);
		Form&	operator=(const Form& copy);
		~Form();
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(const class Bureaucrat& bureaucrat);
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
};

std::ostream&	operator<<(std::ostream& os, const Form& form);
