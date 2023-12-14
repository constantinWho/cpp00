#include "PhoneBook.hpp"

bool	isNumber(const std::string& line)
{
	for (size_t i = 0; i < line.length(); i++)
	{
		if (!isdigit(line[i]))
			return false;
	}
	return true;
}

bool isValid(const std::string& line, const std::string& type)
{
	if (line.empty())
	{
		std::cout << RED << "Error: empty "<< type << RESET << std::endl;
		return false;
	}
	else if (line.find(' ') != std::string::npos && type == "phone number")
	{
		std::cout << RED << "Error: " << type << " should be only one string of digits" << RESET << std::endl;
		return false;
	}
	if (type == "phone number" && !isNumber(line))
	{
		std::cout << RED << "Error: " << type << " should be only digits" << RESET << std::endl;
		return false;
	}
	else if (line.find(' ') != std::string::npos && type != "darkest secret")
	{
		std::cout << RED << "Error: " << type << " should be a single word" << RESET << std::endl;
		return false;
	}
	return true;
}

void	chooseSetter(Contact& newContact, const std::string& type, std::string& line)
{
	if (type == "first name")
		newContact.setFirstName(line);
	else if (type == "last name")
		newContact.setLastName(line);
	else if (type == "nickname")
		newContact.setNickname(line);
	else if (type == "darkest secret")
		newContact.setDarkestSecret(line);
	else if (type == "phone number")
		newContact.setPhoneNumber(line);
}

void	addInfo(Contact& newContact, const std::string& type)
{
	std::string	line;

	std::cout << GREEN << "Enter " << type << ": " << RESET;
	std::getline(std::cin, line);
	if (isValid(line, type))
		chooseSetter(newContact, type, line);
	else
		addInfo(newContact, type);
}

int	main()
{
	PhoneBook	phoneBook;
	Contact		newContact;
	int			index;
	std::string	line;

	index = 0;
	while (1)
	{
		std::cout << CYAN << "Enter a command: " << RESET;
		std::getline(std::cin, line);
		if (!isValid(line, "command"))
			continue ;
		if (line == "EXIT")
			break ;
		else if (line == "ADD")
		{
			addInfo(newContact, "first name");
			addInfo(newContact, "last name");
			addInfo(newContact, "nickname");
			addInfo(newContact, "darkest secret");
			addInfo(newContact, "phone number");
			newContact.setIndex(&index, false);
			phoneBook.addContact(newContact);
		}
		else if (line == "SEARCH")
		{
			phoneBook.printContacts();
			std::cout << GREEN << "Enter index: " << RESET;
			std::getline(std::cin, line);
			if (isNumber(line) && std::atoi(line.c_str()) < index)
				phoneBook.printContact(std::atoi(line.c_str()));
			else
				std::cout << RED << "Error: invalid index" << RESET << std::endl;
		}
		else
			std::cout << RED << "Error: invalid command" << RESET << std::endl;
	}
	return (0);
}
