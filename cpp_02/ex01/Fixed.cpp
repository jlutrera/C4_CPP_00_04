/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:38:09 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/07 19:04:24 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixPoint( 0 )
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &a )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixPoint( n * ( 1 << _nbBitsFrac ) )
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixPoint( roundf( n * ( 1 << _nbBitsFrac ) ) )
{
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
    return _fixPoint;
}

void    Fixed::setRawBits( int const raw ) 
{
    _fixPoint = raw;
}

int		Fixed::getNbBitsFracc( void ) const
{
	return _nbBitsFrac;
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>( _fixPoint ) / ( 1 << _nbBitsFrac );
}

int     Fixed::toInt( void ) const 
{
	//Para convertir a un número entero, se debe mover el punto a su extremo derecho.
    return _fixPoint >> _nbBitsFrac;
}

Fixed& Fixed::operator =( const Fixed &a ) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &a )
        _fixPoint = a.getRawBits();
    return *this;
}

std::ostream& operator <<( std::ostream &o, Fixed const &p ) 
{
    o << p.toFloat();
    return o;
}
