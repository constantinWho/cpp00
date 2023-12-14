#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <cctype>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

const std::string RED = "\033[1;31m";
const std::string MAGENTA = "\033[1;35m";
const std::string CYAN = "\033[1;36m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string RESET = "\033[0m";

class PhoneBook {

	private:
		Contact		_contacts[8];
		int			_contactCount;

	public:

		int			oldestIndex;
		// Constructor and destructor
		PhoneBook();
		~PhoneBook();

		// Methods
		void		printWelcomeMessage(void) const;
		void		addContact(Contact contact);
		void		printContacts() const;
		void		printContact(int index);
};

#endif
