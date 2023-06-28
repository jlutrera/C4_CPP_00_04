#include "Weapon.hpp"

Weapon::Weapon( void )
{

}

Weapon::~Weapon( void )
{

}

std::string& Weapon::getType(std::string s)
{
    return s;
}

void Weapon::setType(std::string new_s, std::string s)
{
    s = new_s;
}
