#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
	this->_binaryPoint = 0;
}

Fixed& Fixed::operator=( const Fixed & a ) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &a )
        this->setRawBits(a.getRawBits());
    return *this;
}

Fixed::Fixed( const Fixed & a ) 
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const 
{
    return this->_binaryPoint;
}

void    Fixed::setRawBits( int const raw ) 
{
    this->_binaryPoint = raw;
}

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->_binaryPoint = n << this->_nbBits;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->_binaryPoint = roundf( n * ( 1 << this->_nbBits ));
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << this->_nbBits );
}

int     Fixed::toInt( void ) const 
{
    return this->_binaryPoint >> this->_nbBits;
}

std::ostream & operator << ( std::ostream & o, Fixed const & p ) 
{
    o << p.toFloat();
    return o;
}
