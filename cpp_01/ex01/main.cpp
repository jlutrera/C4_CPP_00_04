#include "Zombie.hpp"
#include <stdlib.h>

int main( void )
{
	std::string name;
	int 		N;

	std::cout << "Type a zombie name > ";
	std::cin >> name;
	
	// If ctrl + D is pressed, finish
	if (std::cin.eof())
	{
		std::cout << "Exit ! " << std::endl;
		return 0;
	}
	
	do
	{
		std::cout << "How many zombies do you want ? ";
		std::cin >> N;
		if (std::cin.eof())
		{
			std::cout << "Exit ! " << std::endl;
			return 0;
		}
	}
	while ( N <= 0 );

	std::cout << "\nCreating zombies " << std::endl;
	Zombie *horde = zombieHorde( N, name );
	for ( int i = 0; i < N; i++ )
		horde[i].announce();
	delete [] horde;
	std::cout << "Zombies destroyed.\n" << std::endl;
	return 0;
}