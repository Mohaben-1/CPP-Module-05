/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 20:34:21 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 20:49:43 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	*this = copy;
	std::cout << "Intern Copy constructor called" << std::endl;
}

Intern&	Intern::operator=(const Intern& copy)
{
	(void)copy;
	std::cout << "Intern Copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}

static	AForm	*create_Shrubbery(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

static	AForm	*create_RobotomyRequest(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

static	AForm	*create_PresidentialPardon(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string form_name, std::string form_target)
{
	const std::string	formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm				*(*creators[3])(const std::string& target) = {&create_Shrubbery, &create_RobotomyRequest, &create_PresidentialPardon};

	for (int i = 0; i < 3; i++)
	{
		if (form_name == formNames[i])
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (creators[i](form_target));
		}
	}
	std::cout << "Intern couldn't create form: " << form_name << std::endl;
	return (NULL);
}
