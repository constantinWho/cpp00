#include <iostream>

class Contact {

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_darkestSecret;
		std::string	_phoneNumber;
		int			_index;

	public:
		// Constructor and destructor
		Contact();
		~Contact();

		// Methods
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getDarkestSecret() const;
		std::string getPhoneNumber() const;

		// Setters
		void setFirstName(std::string firstName);
		void setLastName(std::string lastName);
		void setNickname(std::string nickname);
		void setDarkestSecret(std::string darkestSecret);
		void setPhoneNumber(std::string phoneNumber);
};
