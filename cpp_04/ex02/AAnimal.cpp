/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:42 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:42 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type("Unknown AAnimal")
{
	std::cout << "AAnimal (unknown) : Default constructor called." << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "AAnimal (" << type << ") : Name constructor called." << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal (" << _type << ") : Destructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : _type(other.getType())
{
	std::cout << "AAnimal (" << _type << ") : Copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal : Overload operator = called." << std::endl;
	if ( this != &other )
		_type = other.getType();
	return *this;
}

std::string AAnimal::getType() const
{
	return _type;
}

void  AAnimal::makeSound( void ) const
{
	std::cout << "I don't know how is my sound." << std::endl;
}