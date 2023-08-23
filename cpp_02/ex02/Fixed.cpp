/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:46:47 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/23 13:36:04 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixPoint( 0 ) 
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _fixPoint( n << _nbBitsFrac ) 
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _fixPoint( roundf( n * ( 1 << _nbBitsFrac ) ) ) 
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs ) 
{
	//std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed& Fixed::operator =( const Fixed &rhs ) 
{
    if ( this != &rhs )
        _fixPoint = rhs.getRawBits();
    return *this;
}

Fixed::~Fixed() 
{
	//std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
    return _fixPoint;
}

void    Fixed::setRawBits( int const raw ) 
{
    _fixPoint = raw;
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>(_fixPoint ) / ( 1 << _nbBitsFrac );
}

int     Fixed::toInt( void ) const 
{
    return _fixPoint / ( 1 << _nbBitsFrac );
}

std::ostream& operator <<( std::ostream &o, Fixed const &i ) 
{
    o << i.toFloat();
    return o;
}

//----------------- Comparison operators -----------------//

bool    Fixed::operator >( const Fixed &rhs ) const 
{
    return this->getRawBits() > rhs.getRawBits();
}

bool    Fixed::operator <( const Fixed &rhs ) const 
{
    return this->getRawBits() < rhs.getRawBits();
}

bool    Fixed::operator >=( const Fixed &rhs ) const 
{
    return this->getRawBits() >= rhs.getRawBits();
}

bool   Fixed::operator <=( const Fixed &rhs ) const
{
    return this->getRawBits() <= rhs.getRawBits();
}

bool  Fixed::operator ==( const Fixed &rhs ) const 
 {
    return this->getRawBits() == rhs.getRawBits();
}

bool    Fixed::operator !=( const Fixed &rhs ) const 
{
    return this->getRawBits() != rhs.getRawBits();
}

//------------------ Arithmetic operators ------------------//

Fixed   Fixed::operator +( const Fixed &rhs ) const 
{
    return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed   Fixed::operator -( const Fixed &rhs ) const 
{
    return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed   Fixed::operator *( const Fixed &rhs ) const 
{
    return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed   Fixed::operator /( const Fixed &rhs ) const 
{
    return Fixed( this->toFloat() / rhs.toFloat() );
}

//------------------ Increment/Decrement operators ------------------//

Fixed& Fixed::operator ++( void ) 
{
    ++this->_fixPoint;
    return *this;
}

Fixed   Fixed::operator ++( int ) 
{
    Fixed tmp( *this );
    tmp._fixPoint = this->_fixPoint++;
    return tmp;
}

Fixed& Fixed::operator --( void ) 
{
    --this->_fixPoint;
    return *this;
}

Fixed Fixed::operator --( int ) 
{
    Fixed tmp( *this );
    tmp._fixPoint = this->_fixPoint--;
    return tmp;
}

//----------------------- Max and Min ----------------------//

Fixed& Fixed::min( Fixed &a, Fixed &b ) 
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) 
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) 
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}
