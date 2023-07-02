#include "HumanB.hpp"

HumanB::HumanB( void )
{
	this->_name = "Noname";
	this->_weapon = NULL;
}

HumanB::HumanB(std::string s)
{
	this->_name = s;
	this->_weapon = NULL;
}

void HumanB::setWeapon(Weapon& w)
{
	this->_weapon = &w;
}

void HumanB::attack( void )
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " does not have a weapon to attack." << std::endl;
}