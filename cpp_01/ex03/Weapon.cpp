/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:25 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:41:26 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
 
Weapon::Weapon( void )
{

}

Weapon::~Weapon( void )
{

}

Weapon::Weapon(std::string s)
{
	 this->setType(s);
}

std::string& Weapon::getType( void )
{
	return (this->_type);
}

void Weapon::setType(std::string new_s)
{	
	this->_type = new_s;
}
