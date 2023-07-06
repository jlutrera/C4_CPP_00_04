/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:39:44 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:39:46 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{

}

void Zombie::setName( std::string name )
{
	this->_name = name;
}

void Zombie::announce( void )
{
	std::cout << "\t" << this->_name
			  << " : " << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}