/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:07:54 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 13:22:53 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Noname_clap_name"), ScavTrap("Noname_clap_name"), FragTrap("Noname_clap_name")
{
	std::cout << "DiamondTrap Noname: Default constructor called." << std::endl;
	_nameClass = "DiamondTrap Noname";
	this->_name = "Noname";

	_energyPoints = ScavTrap::_ScavenergyPoints;
	_hitPoints = FragTrap::_FragenergyPoints;
	_attackDamage = FragTrap::_FragattackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" ), ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" )
{	
	std::cout << "DiamondTrap " << name  << ": Name constructor called." << std::endl;
	_nameClass = "DiamondTrap " + name;
	this->_name = name;
	
	_energyPoints = ScavTrap::_ScavenergyPoints;
	_hitPoints = FragTrap::_FragenergyPoints;
	_attackDamage = FragTrap::_FragattackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << ": Destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap( other ), ScavTrap( other ), FragTrap( other )
{
	this->_name = other._name;
	std::cout << other._nameClass << ": Copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& rhs )
{
	std::cout << "DiamondTrap " << rhs._name << ": Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		ClapTrap::_name = rhs.ClapTrap::_name;
		_nameClass = rhs._nameClass;
	    _hitPoints = rhs._hitPoints;
	    _energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am a DiamondTrap named " << this->_name
			  << " and the ClapTrap name is " << ClapTrap::_name 
			  << std::endl;
}
