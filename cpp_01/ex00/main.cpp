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
	
		std::cout << "\nCreating zombie " << name + "1" << " on the heap. (*newZombie)" << std::endl;
		Zombie *azombie = newZombie( name + "1");
		azombie->announce();
		delete( azombie );

		std::cout << "\nCreating zombie " << name + "2" << " on the stack. (randomChump)" << std::endl;
		randomChump( name + "2" );

		return 0;
}