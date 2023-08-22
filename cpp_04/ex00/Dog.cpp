/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:40 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:40 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
	std::cout << "Dog : Default constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog : Destructor called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
}

Dog& Dog::operator=(const Dog &other)
{
	Animal::operator=(other);
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof !!" << std::endl;
}