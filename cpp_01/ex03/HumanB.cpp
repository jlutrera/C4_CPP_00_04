/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:51 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 13:49:46 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) : _name("Noname"), _weapon(NULL)
{

}

HumanB::HumanB(std::string s) : _name(s), _weapon(NULL)
{

}

HumanB::~HumanB( void )
{

}

void HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

void HumanB::attack( void ) const
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << this->_name 
				  << " attacks with their "
				  << this->_weapon->getType() 
				  << std::endl;
	}
	else
		std::cout << this->_name 
				  << " does not have a weapon to attack." 
				  << std::endl;
}