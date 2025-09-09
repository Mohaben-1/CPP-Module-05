/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:07:29 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/09 15:50:51 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	bureaucrat("Mohamed", 1);
		Form		form("My_Form", 1, 1);

		std::cout << bureaucrat << std::endl;
		std::cout << form << std::endl;

		bureaucrat.decrement();
		std::cout << bureaucrat << std::endl;
		
		bureaucrat.signForm(form);
		
		std::cout << form << std::endl;

		bureaucrat.increment();
		
		std::cout << bureaucrat << std::endl;
		
		bureaucrat.signForm(form);
		
		std::cout << form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
