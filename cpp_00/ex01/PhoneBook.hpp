
#ifndef PHONEBOOK_HPP
#	define PHONEBOOK_HPP

#	include "Contact.hpp"

class PhoneBook{
	private:
	    Contact	_contacts[8];
	public:
		void	addContact( void );
		void	printContacts( void ) const;
		void	search( void ) const;
};

#endif