/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:55:37 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 20:54:32 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
		Form(std::string _name, int _signGrade, int _execGrade);
		Form(const Form& copy);
		Form&	operator=(const Form& copy);
		~Form();

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;
		void		beSigned(const Bureaucrat& b);
		class	GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& os, const Form& f);
