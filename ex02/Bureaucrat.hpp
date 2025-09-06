/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:22:46 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/06 19:10:31 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Form;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat&	operator=(const Bureaucrat& copy);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		signForm(Form& f) const;
		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const  throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& b);