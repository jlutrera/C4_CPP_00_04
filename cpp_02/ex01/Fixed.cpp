#include "Fixed.hpp"

int Fixed::getRawBits( void ) const 
{
	//std::cout << "getRawBits member function called" << std::endl;
    return this->_rawBits;
}

void    Fixed::setRawBits( int const raw ) 
{
    this->_rawBits = raw;
}

int		Fixed::getNbBitsFracc() const
{
	return this->_nbBitsFracc;
}

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed & Fixed::operator = ( const Fixed & a ) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &a )
        this->setRawBits( a.getRawBits() );
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

Fixed::Fixed( const int n )
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n * ( 1 << this->getNbBitsFracc() ));
	std::cout << "valor de raw para enteros = " << this->getRawBits() << std::endl;
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits( roundf( n * ( 1 << this->getNbBitsFracc() )));
	std::cout << "valor de raw para float = " << this->getRawBits() << std::endl;
}

float   Fixed::toFloat( void ) const 
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << this->getNbBitsFracc() );
}

int     Fixed::toInt( void ) const 
{
    return this->getRawBits() >> this->getNbBitsFracc();
}

std::ostream & operator << ( std::ostream & o, Fixed const & p ) 
{
    o << p.toFloat();
    return o;
}
