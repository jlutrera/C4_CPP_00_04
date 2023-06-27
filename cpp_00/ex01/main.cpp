
#include "PhoneBook.hpp"

static int ft_one_order(std::string input){
	std::stringstream ss(input);
    std::string token;
    std::vector<std::string> strings;

	// Split the input line by space delimiter and store individual strings
	while (ss >> token)
	    strings.push_back(token);
	return (strings.size() == 1);
}

int main(void) {
	PhoneBook book;
	std::string input;

	std::cout << std::endl;
	std::cout << "📞 Welcome to your PhoneBook" << std::endl;
	std::cout << std::endl;
	
	book.welcome();
	while (1){
		// Write the prompt and wait the intro
		std::cout << "> ";
		std::getline(std::cin, input);
		// If ctrl + D is pressed, finish
		if (std::cin.eof()){
			std::cout << "Exit ! " << std::endl;
			break;
		}
		
		// If input is not empty...
		if (!input.empty()){
			// If there is one order
			if (ft_one_order(input)){
	   			if (input.compare("EXIT") == 0)
					break;
    			else if (input.compare("ADD") == 0)
					book.addContact();
				else if (input.compare("SEARCH") == 0){
					book.printContacts();
					book.search();
				}
				else{
					std::cout << "Error: No order entered." << std::endl;
					book.welcome();
				}
			}
			// Error if more than one order exists
			else
				std::cout << "Error: Multiple orders entered." << std::endl;
		}
	}
	return 0;
}
