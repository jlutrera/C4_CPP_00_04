/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:38:49 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:38:51 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
}

Zombie::Zombie( void )
{

}

Zombie::~Zombie( void )
{
	std::cout << "Zombie " << this->_name << " destroyed.\n" << std::endl;
}

void Zombie::announce( void )  const
{
	std::cout << "    " << this->_name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}