#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	b1("Mohamed", 1);
		std::cout << b1 << std::endl;
		Form		f1("Form1", 50, 25);
		std::cout << f1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
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
		Form		f2("Form2", 100, 75);
		std::cout << f2 << std::endl;
		f2.beSigned(b2);
		std::cout << f2 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-----------------------------------" << std::endl;
	try
	{
		Bureaucrat	b3("test", 75);
		std::cout << b3 << std::endl;
		Form		f3("Form3", 50, 25);
		std::cout << f3 << std::endl;
		f3.beSigned(b3);
		std::cout << f3 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}