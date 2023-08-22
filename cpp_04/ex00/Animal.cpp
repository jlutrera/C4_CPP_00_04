/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:16 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:16 by jutrera-         ###   ########.fr       */
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

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	if ( this != &other )
		_type = other._type;
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