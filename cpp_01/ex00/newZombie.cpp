#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *aux;

	aux = new Zombie( name );
	return aux;
}