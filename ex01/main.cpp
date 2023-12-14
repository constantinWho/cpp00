#include "PhoneBook.hpp"

bool isValid(const std::string& command, const std::string& type)
{
	if (command.empty())
	{
		std::cout << RED << "Error: empty "<< type << RESET << std::endl;
		return false;
	}
	else if (command.find(' ') != std::string::npos)
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
	if (type == "last name")
		newContact.setLastName(line);
	if (type == "nickname")
		newContact.setNickname(line);
	if (type == "darkest secret")
		newContact.setDarkestSecret(line);
}

void	addInfo(Contact& newContact, const std::string& type)
{
	std::string	line;

	std::cout << GREEN << "Enter " << type << ": " << RESET;
	std::getline(std::cin, line);
	if (isValid(line, type))
	{
		chooseSetter(newContact, type, line);
		std::cout << "You entered: " << line << std::endl;
	}
	else
		addInfo(newContact, type);
}

int	main()
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	line;

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
		}
		else
		{
			std::cout << RED << "Error: invalid command" << RESET << std::endl;
		}
	}
	return (0);
}
