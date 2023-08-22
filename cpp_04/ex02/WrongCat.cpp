/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:36:18 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:36:18 by jutrera-         ###   ########.fr       */
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

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal( other )
{
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain( *other._brain);
	}
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Meow Meow!" << std::endl;
}
