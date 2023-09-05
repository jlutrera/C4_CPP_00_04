/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:01 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:45:35 by jutrera-         ###   ########.fr       */
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

Dog::Dog(const Dog &other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog : Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog : Overload operator = called." << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof !!" << std::endl;
}

std::string Dog::getBrain(int i) const
{
	return _brain->getBrain(i);
}

void Dog::setBrain(int i, std::string str)
{
	_brain->setBrain(i, str);
}
