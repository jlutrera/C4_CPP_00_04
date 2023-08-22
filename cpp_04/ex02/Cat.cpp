/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:32:14 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:32:14 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal( "Cat" )
{
	std::cout << "Cat : Default constructor called." << std::endl;
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat : Destructor called." << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &other) : AAnimal( other )
{
	*this = other;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		_brain = new Brain(* other._brain);
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	std::cout << "Meow Meow !!" << std::endl;
}

std::string Cat::getBrain() const
{
	return _brain->getBrain();
}