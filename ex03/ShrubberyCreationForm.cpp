/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:57:45 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 19:13:04 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Default_Target")
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& _target) : AForm("ShrubberyCreationForm", 145, 137), target(_target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), target(copy.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		target = copy.target;
	}
	std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	check_execution(executor);
	std::ofstream	ofs((target + "_shrubbery").c_str());

	if (!ofs)
	{
		std::cerr << "Errror: can't open file " << target + "_shrubbery" << "!" << std::endl;
		return ;
	}
	ofs << "          &&& &&  & &&\n"
			"      && &\\/&\\|& ()|/ @, &&\n"
			"      &\\/(/&/&||/& /_/)_&/_&\n"
			"   &() &\\/&|()|/&\\/ '%\" & ()\n"
			"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
			"&&   && & &| &| /& & % ()& /&&\n"
			" ()&_---()&\\&\\|&&-&&--%---()~\n"
			"     &&     \\|||\n"
			"             |||\n"
			"             |||\n"
			"             |||\n"
			"       , -=-~  .-^- _"
			<< std::endl;

	ofs.close();
}
