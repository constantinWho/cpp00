#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

std::string Contact::getFirstName() const
{
	return (this->_firstName);
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

std::string Contact::getLastName() const
{
	return (this->_lastName);
}

void Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Contact::getNickname() const
{
	return (this->_nickname);
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
