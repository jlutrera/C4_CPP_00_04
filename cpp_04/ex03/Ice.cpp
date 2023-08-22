/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:26 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:26 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::~Ice()
{

}

Ice& Ice::operator=(const Ice &hrs)
{

}

Ice::Ice(const Ice & hrs)
{
	*this = hrs;
}

AMateria* Ice::clone() const
{
	return &Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << _type << " *";
}