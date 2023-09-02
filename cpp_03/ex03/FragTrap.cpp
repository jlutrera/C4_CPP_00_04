/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 23:33:32 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 13:13:37 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "FragTrap " << _name << ": Default constructor called." << std::endl;
	_nameClass = "FragTrap Noname";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_FraghitPoints = 100;
    _FragenergyPoints = 100;
    _FragattackDamage = 30;
}

FragTrap::FragTrap( std::string name) : ClapTrap( name )
{
	std::cout << "FragTrap " << _name << ": Name constructor called." << std::endl;
	_nameClass = "FragTrap " + name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_FraghitPoints = 100;
    _FragenergyPoints = 100;
    _FragattackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << ": Destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << other._name << ": Copy constructor called." << std::endl;
	_FraghitPoints = other._FraghitPoints;
    _FragenergyPoints = other._FragenergyPoints;
    _FragattackDamage = other._FragattackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "ScavTrap " << rhs._name << ": Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_nameClass = rhs._nameClass;
	    _hitPoints = rhs._hitPoints;
	    _energyPoints = rhs._energyPoints;
	    _attackDamage = rhs._attackDamage;
		_FraghitPoints = rhs._FraghitPoints;
    	_FragenergyPoints = rhs._FragenergyPoints;
    	_FragattackDamage = rhs._FragattackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << _nameClass << " says : Give me five !" << std::endl;  
}
