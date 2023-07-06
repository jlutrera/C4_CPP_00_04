/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:38:00 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:38:01 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int main( void )
{
		std::string name;

		std::cout << "Type a zombie name > ";
		std::cin >> name;
		
		// If ctrl + D is pressed, finish
		if (std::cin.eof())
		{
			std::cout << "Exit ! " << std::endl;
			return 0;
		}
	
		std::cout << "\nCreating zombie " << name << " on the heap." << std::endl;
		Zombie *zombie1 = newZombie( name );
		zombie1->announce();
		delete( zombie1 );

		std::cout << "\nCreating zombie " << name << " on the stack." << std::endl;
		Zombie zombie2( name );
		zombie2.announce();
		
		std::cout << "\nCalling randomChump()." << std::endl;
		randomChump( "Chumpy" );

		return 0;
}