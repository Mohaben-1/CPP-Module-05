/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:55:34 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 18:35:02 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("No_Name"), isSigned(false), signGrade(150), execGrade(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
}

AForm::AForm(std::string _name, int _signGrade, int _execGrade) : name(_name), isSigned(false), signGrade(_signGrade), execGrade(_execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw (AForm::GradeTooHighException());
	else if (_signGrade > 150 || _execGrade > 150)
		throw (AForm::GradeTooLowException());
	std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(const AForm& copy) : name(copy.name), isSigned(false), signGrade(copy.signGrade), execGrade(copy.execGrade)
{
	std::cout << "AForm Copy constructor called" << std::endl;
}

AForm&	AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		isSigned = copy.isSigned;
	std::cout << "AForm Copy assignment operator called" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return (name);
}

bool	AForm::getIsSigned() const
{
	return (isSigned);
}

int	AForm::getSignGrade() const
{
	return (signGrade);
}

int	AForm::getExecGrade() const
{
	return (execGrade);
}

void	AForm::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > signGrade)
		throw (AForm::GradeTooLowException());
	isSigned = true;
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Exception: Grade Too High!");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Exception: Grade Too Low!");
}

const char	*AForm::NotSignedException::what() const throw()
{
	return ("Form Not Signed!");
}

std::ostream&	operator<<(std::ostream& os, const AForm& f)
{
	os << "AForm " << f.getName()
		<< ", Sign grade: " << f.getSignGrade()
		<< ", Exec grade: " << f.getExecGrade()
		<< ", Is signed: " << (f.getIsSigned() ? "Yes" : "No");
	return (os);
}

void	AForm::check_execution(const Bureaucrat& executor) const
{
	if (!isSigned)
		throw (NotSignedException());
	if (executor.getGrade() > execGrade)
		throw (GradeTooLowException());
}
