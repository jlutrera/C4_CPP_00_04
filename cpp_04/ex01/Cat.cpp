/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:51 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:47:01 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
	std::cout << "Cat : Default constructor called." << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called." << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : Animal( other ), _brain(new Brain(*other._brain))
{
	std::cout << "Cat : Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat : Overload operator = called." << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow Meow !!" << std::endl;
}

std::string Cat::getBrain(int i) const
{
	return _brain->getBrain(i);
}

void Cat::setBrain(int i, std::string str)
{
	_brain->setBrain(i, str);
}
