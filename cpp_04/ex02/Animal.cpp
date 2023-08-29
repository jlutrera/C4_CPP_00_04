/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:28 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:28 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("Unknown animal")
{
	std::cout << "Animal (unknown) : Default constructor called." << std::endl;
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Animal (" << type << ") : Name constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal (" << _type << ") : Destructor called." << std::endl;
}

Animal::Animal(const Animal &other) : _type(other.getType())
{
	std::cout << "Animal (" << _type << ") : Copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal : Overload operator = called." << std::endl;
	if ( this != &other )
		_type = other.getType();
	return *this;
}

std::string Animal::getType() const
{
	return _type;
}

void  Animal::makeSound( void ) const
{
	std::cout << "I don't know how is my sound." << std::endl;
}