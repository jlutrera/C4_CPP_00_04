#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::welcome(void) const {
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: to quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact(void) {
	static int	i = 0;
	this->_contacts[i % 8].init(i % 8);
	i++;
}

void	PhoneBook::printContacts(void) const {
	std::cout << YELLOW << "             PHONBOOK CONTACTS" << RESET << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	for (size_t i = 0; i < 8; i++) {
		this->_contacts[i].view(i);
	}
	std::cout << "------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::_readInput() const{
	std::string input;
	
	std::cout << "Please enter the contact index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.size() != 1 || input[0] < '0' || input[0] > '8')
		return -1;
	return (input[0] - '0');
}

void	PhoneBook::search(void) const {
	int i = this->_readInput();
	if (i != -1)
		this->_contacts[i].display(i);
	else if (!std::cin.eof())
		std::cout << "Error: It is not possible print the contact" << std::endl;
	std::cout << std::endl;
}
