/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:35:55 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/08 10:20:12 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{

}

PhoneBook::~PhoneBook( void )
{

}

void	PhoneBook::usage( int e ) const
{
	if (e)
		std::cout << "Error: No command was entered." << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << "* Welcome to your PhoneBook *" << std::endl;
		std::cout << std::endl;
	}
	std::cout << "--------------USAGE---------------" << std::endl;
	std::cout << GREEN << "ADD" << RESET << "\t: To add a contact." << std::endl;
	std::cout << GREEN << "SEARCH" << RESET << "\t: To search for a contact." << std::endl;
	std::cout << GREEN << "EXIT" << RESET << "\t: To quite the PhoneBook." << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << std::endl;
}

int PhoneBook::ft_one_order( std::string input ) const
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

void	PhoneBook::addContact( void )
{
	static int	i = 0;
	this->_contacts[i % 8].init(i % 8);
	i++;
}

void	PhoneBook::searchContact( void ) const
{
	std::string input;
	int i;
	
	//Print the contacts table to search
	std::cout << YELLOW << "            PHONEBOOK CONTACTS" << RESET << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	for (size_t i = 0; i < 8; i++)
		this->_contacts[i].view(i);
	std::cout << "------------------------------------------" << std::endl;
	std::cout << std::endl;

	//Ask for the contact index
	std::cout << "Please enter the contact index: ";
	std::getline(std::cin, input);
	if (std::cin.eof() || input.size() != 1 || input[0] < '0' || input[0] > '8')
		i = -1;
	else
		i = input[0] - '0';
	if (i != -1)
		this->_contacts[i].display(i);
	else if (!std::cin.eof())
		std::cout << "Error: It is not possible to print the contact" << std::endl;
	std::cout << std::endl;
}
