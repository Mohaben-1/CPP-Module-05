/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:39:33 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 19:41:33 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("No_Name"), grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade = _grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name), grade(copy.grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		grade = copy.grade;
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (name);
}

int	Bureaucrat::getGrade() const
{
	return (grade);
}

void	Bureaucrat::increment()
{
	if (grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	grade--;
}

void	Bureaucrat::decrement()
{
	if (grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	grade++;
}


const char	*Bureaucrat::GradeTooHighException::what() const  throw()
{
	return ("Bureaucrat Grade Too High");
}


const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade Too Low");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ",  bureaucrat grade " << b.getGrade() << ".";
	return (os);
}

void	Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << name << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << name << " couldn’t execute " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}
