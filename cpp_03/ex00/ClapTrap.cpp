#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{

}

ClapTrap::ClapTrap (ClapTrap & ct)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =(ClapTrap & ct)
{
    std::cout << "Assignation operator called" << std::endl;
	if (this != &ct)
    {
        _name = ct.getName();
        _hitPoints = ct.getHitPoints();
        _energyPoints = ct.getEnergyPoints();
        _attackDamage = ct.getAttackDamage();
    }
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << getName() << " attacks " << target 
              << ", causing " << getAttackDamage() << " points of damage !" 
              << std::endl;
    if (_energyPoints != 0)
        _energyPoints -= 1;
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
    if (_hitPoints != 0)
        _hitPoints += amount;
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