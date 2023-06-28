
#include "Zombie.hpp"

Zombie::Zombie()
{	
}

Zombie::~Zombie()
{	
}

void Zombie::setName( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void )
{
	std::cout << "\t" << this->_name
			  << " : " << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}