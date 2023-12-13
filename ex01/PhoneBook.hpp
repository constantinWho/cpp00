#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
/* # include "Contact.hpp" */

class PhoneBook {

	private:
		//Contact		_contacts[8];
		int			_contactCount;
	public:
		// Constructor and destructor
		PhoneBook();
		~PhoneBook();

		// Methods
		void printWelcomeMessage(void) const;
/* 		void addContact(Contact contact);
		void printContacts();
		void printContact(int index); */
};

#endif
