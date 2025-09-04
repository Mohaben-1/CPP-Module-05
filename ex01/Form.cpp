#include "Form.hpp"

Form::Form() : name("No_name"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(const std::string name, int signGrade, int execGrade) : name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	std::cout << "Form constructor called" << std::endl;
}
Form::Form(const Form& copy) : name(copy.name), isSigned(false), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
	std::cout << "Form Copy constructor called" << std::endl;
}

Form&	Form::operator=(const Form& copy)
{
	if (this != &copy)
		isSigned = copy.isSigned;
	std::cout << "Form Copy assignment operator called" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

std::string	Form::getName() const
{
	return (name);
}

bool	Form::getIsSigned() const
{
	return (isSigned);
}

int	Form::getSignGrade() const
{
	return (signGrade);
}

int	Form::getExecGrade() const
{
	return (execGrade);
}

void	Form::beSigned(const class Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Form Exception: Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Form Exception: Grade Too Low");
}

std::ostream&	operator<<(std::ostream& os, const Form& form)
{
	os << "Form " << form.getName() << ", Sign grade: " << form.getSignGrade() << ", Exec grade: " << form.getExecGrade() << ", Is signed: " << (form.getIsSigned() ? "Yes" : "No");
	return (os);
}