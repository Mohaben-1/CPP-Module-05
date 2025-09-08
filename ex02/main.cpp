/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:07:29 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 19:41:14 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat high("HighRank", 1);
		Bureaucrat low("LowRank", 150);

		ShrubberyCreationForm shrub("garden");
		RobotomyRequestForm robo("Bender");
		PresidentialPardonForm pardon("Arthur");

		std::cout << shrub << std::endl;
		std::cout << robo << std::endl;
		std::cout << pardon << std::endl;

		std::cout << "\n--- LowRank tries to sign ---" << std::endl;
		low.signForm(shrub);
		low.signForm(robo);
		low.signForm(pardon);

		std::cout << "\n--- HighRank signs everything ---" << std::endl;
		high.signForm(shrub);
		high.signForm(robo);
		high.signForm(pardon);

		std::cout << "\n--- LowRank tries to execute ---" << std::endl;
		low.executeForm(shrub);
		low.executeForm(robo);
		low.executeForm(pardon);

		std::cout << "\n--- HighRank executes everything ---" << std::endl;
		high.executeForm(shrub);
		high.executeForm(robo);
		high.executeForm(pardon);

	}
	catch (std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	return (0);
}
