
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	public:
		Contact();
		~Contact(void);
		void set(
				std::string firstName,
				std::string lastName,
				std::string nickname,
				std::string phoneNumber,
				std::string darkestSecret
		);
		void printInfo(int i);
		void printSelfInfo(void);

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phone;
		std::string _darkestSecret;
};

#endif
