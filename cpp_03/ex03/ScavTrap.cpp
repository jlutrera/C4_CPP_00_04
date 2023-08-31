/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:06:34 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 13:15:41 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{

	std::cout << "ScavTrap " << _name << ": Default constructor called." << std::endl;
	_nameClass = "ScavTrap Noname";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap( name )
{
	std::cout << "ScavTrap " << _name << ": Name constructor called." << std::endl;
	_nameClass = "ScavTrap " + name;	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << ": Destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << other._name << ": Copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap " << _name << ": Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_nameClass = rhs._nameClass;
	    _hitPoints = rhs._hitPoints;
	    _energyPoints = rhs._energyPoints;
	    _attackDamage = rhs._attackDamage;
	}
	return *this;
}

void ScavTrap::guardGate( void )
{
	std::cout << _nameClass << " is now in Gate keeper mode." << std::endl;  
}

void ScavTrap::attack( const std::string &target )
{
	std::cout << "(This is HORRIBLE !!!!) ";
	ClapTrap::attack(target);
}