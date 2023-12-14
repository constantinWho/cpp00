#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_contactCount = 0;
	this->oldestIndex = 0;
	PhoneBook::printWelcomeMessage();
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::printWelcomeMessage() const
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

void	PhoneBook::addContact(Contact contact)
{

	if (this->_contactCount < 8)
	{
		this->_contacts[this->_contactCount] = contact;
		this->_contactCount++;
	}
	else
	{
		contact.setIndex(&this->oldestIndex, true);
		this->_contacts[this->oldestIndex] = contact;
		if (this->oldestIndex == 7)
			this->oldestIndex = 0;
		else
			this->oldestIndex++;
	}
}

void	truncate(std::string& str)
{
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str.push_back('.');
	}
}

void	PhoneBook::printContacts() const
{
	int i = 0;
	std::cout << GREEN << "     Index|First Name| Last Name|  Nickname" << RESET << std::endl;
	while (i < this->_contactCount)
	{
		std::string firstName = this->_contacts[i].getFirstName();
		std::string lastName = this->_contacts[i].getLastName();
		std::string nickname = this->_contacts[i].getNickname();

		truncate(firstName);
		truncate(lastName);
		truncate(nickname);

		std::cout << BLUE << std::setw(10) << this->_contacts[i].getIndex() << "|";
		std::cout << std::setw(10) << firstName << "|";
		std::cout << std::setw(10) << lastName << "|";
		std::cout << std::setw(10) << nickname << RESET << std::endl;
		i++;
	}
}

void	PhoneBook::printContact(int index)
{
	std::cout << BLUE << "First Name: " << RED << this->_contacts[index].getFirstName() << std::endl;
	std::cout << BLUE << "Last Name: " << RED << this->_contacts[index].getLastName() << std::endl;
	std::cout << BLUE << "Nickname: " << RED << this->_contacts[index].getNickname() << std::endl;
	std::cout << BLUE << "Darkest Secret: " << RED << this->_contacts[index].getDarkestSecret() << std::endl;
	std::cout << BLUE << "Phone Number: " << RED << this->_contacts[index].getPhoneNumber() << std::endl;
}
