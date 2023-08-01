#include "Fixed.hpp"

Fixed t = 1;
Fixed f = 0;

int Fixed::getRawBits( void ) const 
{
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
}

Fixed::Fixed( const float n )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits( roundf( n * ( 1 << this->getNbBitsFracc() )));
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

Fixed & Fixed::operator > ( const Fixed & a )
{
	if (this->toFloat() > a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator < ( const Fixed & a )
{
	if (this->toFloat() < a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator >= ( const Fixed & a )
{
	if (this->toFloat() >= a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator <= ( const Fixed & a )
{
	if (this->toFloat() <= a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator == ( const Fixed & a )
{
	if (this->toFloat() == a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator != ( const Fixed & a )
{
	if (this->toFloat() != a.toFloat())
		return t;
	return f;
}

Fixed & Fixed::operator + ( const Fixed & a )
{
	return Fixed((this->toFloat() + a.toFloat()));
}

Fixed & Fixed::operator - ( const Fixed & a )
{
	return Fixed((this->toFloat() - a.toFloat()));
}

Fixed & Fixed::operator * ( const Fixed & a )
{
	return Fixed((this->toFloat() * a.toFloat()));
}

Fixed & Fixed::operator / ( const Fixed & a )
{
	return Fixed((this->toFloat() / a.toFloat()));
}

Fixed & Fixed::operator ++ ( int a )
{

}

Fixed & Fixed::operator -- ( int a )
{

}

Fixed & Fixed::operator ++ ( )
{

}

Fixed & Fixed::operator -- ( )
{

}

Fixed & Fixed::min(const Fixed &a, const Fixed & b)
{

}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{

}

Fixed & Fixed::max(const Fixed &a, const Fixed & b)
{

}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{

}
