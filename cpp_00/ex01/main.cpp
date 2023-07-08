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

int main( void )
{
	PhoneBook 	book;
	std::string	input;

	book.usage(0);

	while ( 1 )
	{
		// Write the prompt and wait the intro
		std::cout << "> ";
		std::getline(std::cin, input);

		// If ctrl + D is pressed, finish
		if (std::cin.eof())
			break;
		
		if (!input.empty())
		{
			if (book.ft_one_order( input ))
			{
	   			if (input.compare( "EXIT" ) == 0)
					break;
    			else if (input.compare( "ADD" ) == 0)
					book.addContact();
				else if (input.compare( "SEARCH" ) == 0)
					book.searchContact();
				else
					book.usage(1);
			}
			// Error if more than one order exists
			else
				std::cout << "Error: Multiple commands were entered." << std::endl;
		}
	}
	std::cout << "Exit ! " << std::endl;
	return 0;
}
