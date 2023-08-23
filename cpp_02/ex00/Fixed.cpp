/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:44:22 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/23 14:18:16 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixPoint( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &a ) : _fixPoint(a._fixPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixPoint;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_fixPoint = raw;
}

 Fixed& Fixed::operator =( const Fixed &a )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
		_fixPoint = a.getRawBits();
	return *this;
}
