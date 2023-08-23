/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:07:54 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/22 21:07:57 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap( "Noname_clap_name" )
{
	std::cout << "DiamondTrap Nonamed: Default constructor called." << std::endl;
	_nameClass = "DiamondTrap Nonamed";
	_name = "Nonamed";
	FragTrap::_hitPoints = 100;
	FragTrap::_attackDamage = 30;
	ScavTrap::_energyPoints = 50;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap( name + "_clap_name" )
{	

	std::cout << "DiamondTrap " << name  << ": Name constructor called." << std::endl;
	_nameClass = "DiamondTrap " + name;
	_name = name;
	FragTrap::_hitPoints = 100;
	FragTrap::_attackDamage = 30;
	ScavTrap::_energyPoints = 50;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << ": Default destructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << other._nameClass << ": Copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	ClapTrap::operator=(rhs);
	ScavTrap();
	FragTrap();
	return *this;
}

void DiamondTrap::whoAmI( void )
{
	std::cout << "I am a DiamondTrap named " << _name
			  << " and the ClapTrap name is " << ClapTrap::_name 
			  << std::endl;
}

