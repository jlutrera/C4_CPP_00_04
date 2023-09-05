/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:40 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:13 by jutrera-         ###   ########.fr       */
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
	std::cout << "Dog : Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
	std::cout << "Dog : Overload operator = called." << std::endl;
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woof Woof !!" << std::endl;
}
