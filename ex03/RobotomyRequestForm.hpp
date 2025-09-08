/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:13:25 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 19:18:55 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class	RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& _target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
};
