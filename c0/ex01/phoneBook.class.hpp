#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "contact.class.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		int		add(void);
		void		search(void);

	private:
		Contact	_contacts[8];
		int 	_notes;

		void	_setContact(
				std::string firstName,
				std::string lastName,
				std::string nickname,
				std::string phone,
				std::string darkestSecret
				);
};

#endif
