#include "PhoneBook.hpp"


int	main()
{
	PhoneBook	phoneBook;
	std::string	command;

	while (1)
	{
		std::cout << "\033[1;36mEnter a command: \033[0m";
		std::getline(std::cin, command);

		if (command.empty())
		{
			std::cout << "\033[1;31mError: empty command\033[0m" << std::endl;
			continue ;
		}
		else if (command.find(' ') != std::string::npos)
		{
			std::cout << "\033[1;31mError: command should be a single word\033[0m" << std::endl;
			continue ;
		}

		std::cout << "You entered: " << command << std::endl;
		if (command == "EXIT")
			break ;
	}
	return (0);
}
