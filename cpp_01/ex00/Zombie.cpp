
#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
}

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->_name << " destroyed.\n" << std::endl;
}

void Zombie::announce( void )  const
{
	std::cout << "    " << this->_name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}