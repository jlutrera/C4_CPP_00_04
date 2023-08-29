/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:06:34 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/10 23:06:34 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{

	std::cout << "ScavTrap " << this->_name << ": Default constructor called." << std::endl;
	_nameClass = "ScavTrap Noname";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name) : ClapTrap( name )
{
	std::cout << "ScavTrap " << this->_name << ": Name constructor called." << std::endl;
	_nameClass = "ScavTrap " + name;	
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << ": Destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << other._name << ": Copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	ClapTrap::operator=(rhs);
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