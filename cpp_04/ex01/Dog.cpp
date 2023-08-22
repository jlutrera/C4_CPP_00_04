/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:01 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:01 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
	std::cout << "Dog : Default constructor called." << std::endl;
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called." << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain( *other._brain );
	}
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof !!" << std::endl;
}

std::string Dog::getBrain() const
{
	return _brain->getBrain();
}