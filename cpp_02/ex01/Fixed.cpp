#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_fixpoint = 1;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

 Fixed& Fixed::operator =( const Fixed& a)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
		this->setRawBits(a.getRawBits());
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fixpoint;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixpoint = raw;
}

Fixed::Fixed (const int n)
{

}

Fixed::Fixed (const float n)
{

}

float Fixed::toFloat( void ) const
{

}

int Fixed::toInt( void ) const
{

}

std::ostream& operator << (std::ostream &o, const Fixed& p )
{
	o << p.getRawBits();
	return o;
}