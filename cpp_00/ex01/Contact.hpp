
#ifndef CONTACT_HPP
#	define CONTACT_HPP

#	include <iostream>
#	include <iomanip>
#	include <limits>
#	include <sstream>
#	include <vector>
#   include <string>

const std::string RESET = "\033[0m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";

class Contact{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int         _index;
		std::string _printLen(std::string str) const;
		std::string _getInput(std::string str) const;

	public:
		Contact();
		~Contact();
		void    init(int i);
		void    view(int index) const;
		void    display(int index) const;
};

#endif