#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
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

std::string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setIndex(int *index, bool isFull)
{
	this->_index = *index;
	if (!isFull)
		*index += 1;
}

int Contact::getIndex() const
{
	return (this->_index);
}
