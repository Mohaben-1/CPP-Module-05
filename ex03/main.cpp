/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:07:29 by mohaben-          #+#    #+#             */
/*   Updated: 2025/09/08 20:51:09 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	Intern	someRandomIntern;

	AForm*	f1 = someRandomIntern.makeForm("robotomy request", "Bender");
	if (f1)
		delete f1;

	AForm*	f2 = someRandomIntern.makeForm("shrubbery creation", "home");
	if (f2)
		delete f2;

	AForm*	f3 = someRandomIntern.makeForm("presidential pardon", "Arthur Dent");
	if (f3)
		delete f3;

	AForm*	f4 = someRandomIntern.makeForm("coffee form", "me");
	if (f4)
		delete f4;

	return (0);
}
