
#include "PhoneBook.hpp"

int main(void) {
	PhoneBook book;
	std::string input;

	std::cout << std::endl;
	std::cout << "📞 Welcome to Your PhoneBook" << std::endl;
	std::cout << std::endl;
	book.welcome();
	while (1){
		std::cout << "> ";
		std::getline(std::cin, input);

		// If ctrl+D is pressed, finish
		if (std::cin.eof())
			break;
		
		// If input is empty, nothing to do
		if (!input.empty()){
			std::stringstream ss(input);
    		std::string token;
    		std::vector<std::string> strings;

    		// Split the input line by space delimiter and store individual strings
    		while (ss >> token)
    		    strings.push_back(token);
	
	    	// Process the single string.
			if (strings.size() == 1){
	   			if (strings[0].compare("EXIT") == 0)
					break;
    			else if (strings[0].compare("ADD") == 0)
					book.addContact();
				else if (strings[0].compare("SEARCH") == 0){
					book.printContacts();
					book.search();
				}
				else{
					std::cout << "Error: No order entered." << std::endl;
					book.welcome();
				}
			}
			// Error if more than one string exist
			else
				std::cout << "Error: Multiple orders entered." << std::endl;
		}
	}
	return 0;
}
