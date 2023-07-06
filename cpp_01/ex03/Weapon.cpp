#include "Weapon.hpp"
 
Weapon::Weapon( void )
{

}

Weapon::~Weapon( void )
{

}

Weapon::Weapon(std::string s)
{
	 this->setType(s);
}

std::string& Weapon::getType( void )
{
	return (this->_type);
}

void Weapon::setType(std::string new_s)
{	
	this->_type = new_s;
}
