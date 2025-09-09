/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:39:09 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/09 11:32:16 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1("Mohamed", 1);
		std::cout << b1 << std::endl;
		b1.increment();
		std::cout << b1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	b2("ooohhh ghi mandatory", 150);
		std::cout << b2 << std::endl;
		b2.decrement();
		std::cout << b2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	b3("test", 0);
		std::cout << b3 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

