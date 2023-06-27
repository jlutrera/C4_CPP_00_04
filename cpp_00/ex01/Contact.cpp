#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
	std::string	input = "";

	std::cout << str;
	std::getline(std::cin, input);
	if (std::cin.good() && !input.empty())
		return (input);
	return "*";
}

void	Contact::init(int i) {
	std::cout << "Please enter the following data:" << std::endl;
	this->_firstName = this->_getInput("  - First name: ");
	if (!std::cin.eof())
		this->_lastName = this->_getInput("  - Last name: ");
	if (!std::cin.eof())
		this->_nickName = this->_getInput("  - Nickname: ");
	if (!std::cin.eof())
		this->_phoneNumber = this->_getInput("  - Phone number: ");
	if (!std::cin.eof())
		this->_darkestSecret = this->_getInput("  - Darkest secret: ");
	if (!std::cin.eof())
		this->_index = i;
	std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::view(int index) const {
	std::cout << "|" << std::setw(3) << index << " ";
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
		std::cout << "|" << RED << "         >> NO  CONTACT <<         " << RESET;
	else{
		std::cout << "|" << GREEN << std::setw(11) << this->_printLen(this->_firstName) << RESET;
		std::cout << "|" << GREEN << std::setw(11) << this->_printLen(this->_lastName) << RESET;
		std::cout << "|" << GREEN << std::setw(11) << this->_printLen(this->_nickName) << RESET;
	}
		std::cout << "|" << std::endl;
}

void	Contact::display(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty() ||
	 	this->_phoneNumber.empty() || this->_darkestSecret.empty())
		std::cout << RED << "---->> NO CONTACT <<----" << RESET;
	else{
		std::cout << std::endl;
		std::cout << " CONTACT # " << YELLOW << index << RESET << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << "First Name:\t" << GREEN << this->_firstName << RESET << std::endl;
		std::cout << "Last Name:\t" << GREEN << this->_lastName << RESET << std::endl;
		std::cout << "Nickname:\t" << GREEN << this->_nickName << RESET << std::endl;
		std::cout << "Phone number:\t" << GREEN << this->_phoneNumber << RESET << std::endl;
		std::cout << "Darkest secret:\t" << GREEN << this->_darkestSecret << RESET << std::endl;
	}
	std::cout << std::endl;
}
