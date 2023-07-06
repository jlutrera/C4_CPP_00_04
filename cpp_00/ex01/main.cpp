/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:35:36 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:35:41 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	usage( void )
{
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << "ADD\t: To add a contact." << std::endl;
	std::cout << "SEARCH\t: To search for a contact." << std::endl;
	std::cout << "EXIT\t: To quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

static int ft_one_order( std::string input )
{
	std::stringstream	ss(input);
    std::string 		token;
    std::string			strings[2];

	// Split the input line by space delimiter and store individual strings
	int i = 0;
	while (i < 2 && ss >> token)
	    strings[i++] = token;
	return (i  == 1);
}

int main( void )
{
	PhoneBook 	book;
	std::string	input;

	std::cout << std::endl;
	std::cout << "* Welcome to your PhoneBook *" << std::endl;
	std::cout << std::endl;
	
	usage();
	while ( 1 )
	{
		// Write the prompt and wait the intro
		std::cout << "> ";
		std::getline(std::cin, input);

		// If ctrl + D is pressed, finish
		if (std::cin.eof())
		{
			std::cout << "Exit ! " << std::endl;
			break;
		}
		
		if (!input.empty())
		{
			if (ft_one_order( input ))
			{
	   			if (input.compare( "EXIT" ) == 0)
					break;
    			else if (input.compare( "ADD" ) == 0)
					book.addContact();
				else if (input.compare( "SEARCH" ) == 0)
				{
					book.printContacts();
					book.search();
				}
				else
				{
					std::cout << "Error: No order entered." << std::endl;
					usage();
				}
			}
			// Error if more than one order exists
			else
				std::cout << "Error: Multiple orders entered." << std::endl;
		}
	}
	return 0;
}
