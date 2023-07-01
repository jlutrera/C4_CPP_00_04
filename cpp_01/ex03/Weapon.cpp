#include "Weapon.hpp"
 
Weapon::Weapon(std::string s)
{
	 this->setType(s);
}

Weapon::~Weapon( void )
{

}

std::string& Weapon::getType( void )
{
	return (this->_type);
}

void Weapon::setType(std::string new_s)
{	
	this->_type = new_s;
}
