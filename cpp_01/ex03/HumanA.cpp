#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& weapon) : _name(s), _weapon(weapon)
{

}

void HumanA::attack( void )
{
	if (this->_weapon.getType() != "")
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon.getType()<< std::endl;
	}
	else
		std::cout << this->_name << " does not have a weapon to attack." << std::endl;
}