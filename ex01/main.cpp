#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1("Mohamed", 1);
		std::cout << b1 << std::endl;
		b1.incrGrade();
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
		b2.decrGrade();
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
