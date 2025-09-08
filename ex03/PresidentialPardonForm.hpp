/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:27:03 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 19:29:08 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& _target);
		PresidentialPardonForm(const PresidentialPardonForm& copy);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& copy);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
};
