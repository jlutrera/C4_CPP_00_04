/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:04 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:04 by jutrera-         ###   ########.fr       */
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
	std::cout << "WrongCat : Copy constructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat : Overload operator = called." << std::endl;
	WrongAnimal::operator=(other);
	return *this;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "Meow Meow!" << std::endl;
}
