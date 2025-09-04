#pragma once

#include <string>
#include <iostream>

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

};

std::ostream&	operator<<(std::ostream& os, const Form& form);
