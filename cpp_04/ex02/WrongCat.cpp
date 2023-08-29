/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:29 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:29 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat : Default constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal( other ), _brain( new Brain(*other._brain) )
{
	std::cout << "WrongCat :Copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat : Overload operator = called." << std::endl;
	if (this != &other)
	{
		_type = other._type;
		*_brain = *other._brain;
	}
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Meow Meow!" << std::endl;
}

std::string WrongCat::getBrain(int i) const
{
	return _brain->getBrain(i);
}

void WrongCat::setBrain(int i, std::string str)
{
	_brain->setBrain(i, str);
}