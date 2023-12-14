#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_contactCount = 0;
	PhoneBook::printWelcomeMessage();
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << MAGENTA << "PhoneBook destructor called" << std::endl;
}

void PhoneBook::printWelcomeMessage() const
{
	std::cout << MAGENTA << "╔══════════════════════════════╗" << RESET << std::endl;
	std::cout << CYAN << "    Welcome to the PhoneBook!   " << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "   You can " << RESET
		<< YELLOW << "ADD" << RESET
		<< GREEN << "," << RESET
		<< BLUE << " SEARCH" << RESET
		<< GREEN << " or" << RESET
		<< RED << " EXIT" << RESET
		<< CYAN << std::endl;
	std::cout << MAGENTA << "╚══════════════════════════════╝" << RESET << std::endl;
}

/* void PhoneBook::addContact(Contact contact)
{
	if (this->_contactCount == 8)
	{
		std::cout << RED << "Error: PhoneBook is full" << RESET << std::endl;
		return ;
	}
	this->_contacts[this->_contactCount] = contact;
	this->_contactCount++;
} */
