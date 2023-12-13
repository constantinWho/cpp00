#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_contactCount = 0;
	PhoneBook::printWelcomeMessage();
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::printWelcomeMessage() const
{
	std::cout << "\033[1;35m"
		<< "╔══════════════════════════════╗"
		<< "\033[0m" << std::endl;
	std::cout << "\033[1;36m"
		<< "    Welcome to the PhoneBook!   "
		<< "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;32m   You can \033[0m"
		<< "\033[1;33mADD\033[0m\033[1;32m,\033[0m"
		<< "\033[1;34m SEARCH\033[0m"
		<< " \033[1;32mor\033[0m \033[1;31mEXIT\033[0m\033[1;36m"
		<< std::endl;
	std::cout << "\033[1;35m"
		<< "╚══════════════════════════════╝"
		<< "\033[0m" << std::endl;
}
