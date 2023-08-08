#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Noname"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name )
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap & ct)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(ClapTrap &t)
{
	if (this != &t)
    {
        _name = t.getName();
        _hitPoints = t.getHitPoints();
        _energyPoints = t.getEnergyPoints();
        _attackDamage = t.getAttackDamage();
    }
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints != 0)
    {
		std::cout << "ClapTrap " << _name << " attacks " << target 
              << ", causing " << _attackDamage << " points of damage !" 
              << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << _name << " can't attack to " << target
				  << ". It hasn't energy points !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints != 0)
        _hitPoints -= amount;
    if (_energyPoints != 0)
        _energyPoints -= 1;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints != 0 && _energyPoints != 0)
	{
        _hitPoints += amount;
		_energyPoints -= 1;
	}
	else
	{
		if ( _hitPoints == 0 )
			std::cout << _name << "can't be repared.  It hasn´t hit points !" << std::endl;
		if (_energyPoints == 0)
			std::cout << _name << "can't be repared.  It hasn't energy points !" << std::endl;
	}
}

std::string ClapTrap::getName() const
{
    return _name;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}
    
int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}
    
int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}