/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:31 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:31 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" )
{
	std::cout << "Cat : Default constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal( other )
{
	std::cout << "Cat : Copy constructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
	std::cout << "Cat : Overload operator = called." << std::endl;
	Animal::operator=(other);
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow Meow !!" << std::endl;
}

