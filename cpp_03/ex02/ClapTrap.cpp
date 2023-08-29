/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:00:37 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/28 14:18:39 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "Noname" ), _nameClass( "ClapTrap Noname" ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
    std::cout << "ClapTrap " << _name << ": Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"ClapTrap " << _name << ": Destructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name( name ), _nameClass( "ClapTrap " + name ), _hitPoints( 10 ), _energyPoints( 10 ), _attackDamage( 0 )
{
	std::cout << "ClapTrap " << _name << ": Name constructor called" << std::endl;
}

ClapTrap::ClapTrap ( const ClapTrap &t ) : _name(t.getName()), _nameClass(t.getNameClass()), _hitPoints(t.getHitPoints()), _energyPoints(t.getEnergyPoints()), _attackDamage(t.getAttackDamage())
{
    std::cout << "ClapTrap " << t._name << ": Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator =( const ClapTrap &t )
{
	if (this != &t)
    {
        _name = t.getName();
		_nameClass = t.getNameClass();
        _hitPoints = t.getHitPoints();
        _energyPoints = t.getEnergyPoints();
        _attackDamage = t.getAttackDamage();
    }
	return *this;
}

void ClapTrap::attack( const std::string &target )
{
	std::cout << _nameClass;
	if (_hitPoints == 0)
    {
		std::cout << " is dead! It can't attack." << std::endl;
		return ;
	}

	if (_energyPoints == 0)
	{
		std::cout << " can't attack to " << target
			      << ". It hasn't energy points !" << std::endl;
		return;
	}

	std::cout << " attacks " << target 
              << ", causing " << _attackDamage << " damage points!" 
              << std::endl;
	_energyPoints -= 1;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << _nameClass;
	if (_hitPoints == 0)
	{
		std::cout << " is dead !" << std::endl;
		return;
	}

	if (_hitPoints <= amount)
	{
		 std::cout << " takes " << _hitPoints << " damage points and dead !" << std::endl;
		_hitPoints = 0;
		return;
	}
	_hitPoints -= amount;
	std::cout << " takes " << amount << " damage points!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << _nameClass;
 	if ( _hitPoints == 0 )
	{
		std::cout << " can't be repaired. It is dead !" << std::endl;
		return;
	}
	
	if (_energyPoints == 0)
	{
		std::cout << "can't be repaired.  It hasn't energy points !" << std::endl;
		return;
	}

	std::cout << " repairs itself for " << amount << " hit points!" << std::endl;
    _hitPoints += amount;
	_energyPoints -= 1;
}

std::string ClapTrap::getName() const
{
    return _name;
}

std::string ClapTrap::getNameClass() const
{
    return _nameClass;
}

unsigned int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}
    
unsigned int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}
    
unsigned int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}
