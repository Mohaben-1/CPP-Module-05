/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:55:34 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/06 19:56:34 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("No_Name"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string _name, int _signGrade, int _execGrade) : name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw (Form::GradeTooHighException());
	else if (_signGrade > 150 || _execGrade > 150)
		throw (Form::GradeTooLowException());
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

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw (Form::GradeTooLowException());
	isSigned = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form Exception: Grade Too High");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form Exception: Grade Too Low");
}

std::ostream&	operator<<(std::ostream& os, const Form& f)
{
	os << "Form " << f.getName()
		<< ", Sign grade: " << f.getSignGrade()
		<< ", Exec grade: " << f.getExecGrade()
		<< ", Is signed: " << (f.getIsSigned() ? "Yes" : "No");
	return (os);
}
