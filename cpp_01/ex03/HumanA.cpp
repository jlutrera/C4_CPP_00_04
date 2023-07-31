/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:40 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:40:41 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &weapon) : _name(s), _weapon(weapon)
{

}

HumanA::~HumanA( void )
{

}

void HumanA::attack( void ) const
{
	if (this->_weapon.getType() == "" )
		this->_weapon.setType("personal weapons");
	
	std::cout << this->_name 
			  << " attacks with their "
			  << this->_weapon.getType()
			  << std::endl;
}
