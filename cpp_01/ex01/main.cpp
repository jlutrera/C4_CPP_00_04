/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:39:36 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:39:38 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main( void )
{
	std::string name;
	int 		N;

	std::cout << "Type a zombie name > ";
	std::cin >> name;
	
	// If ctrl + D is pressed, finish
	if ( std::cin.eof() || !std::cin.good() )
	{
		std::cout << "Exit ! " << std::endl;
		return 0;
	}
	
	std::cout << "How many zombies do you want ? ";
	std::cin >> N;
	if ( std::cin.eof() || N <= 0 )
	{
		std::cout << "Exit ! " << std::endl;
		return 0;
	}

	std::cout << "\nCreating zombies " << std::endl;
	Zombie *horde = zombieHorde( N, name );
	for ( int i = 0; i < N; i++ )
		horde[i].announce();
	delete [] horde;
	std::cout << "Zombies destroyed.\n" << std::endl;
	return 0;
}