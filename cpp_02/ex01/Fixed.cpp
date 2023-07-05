#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->_binary_point = 0;
	this->fvalue = 0;
	this->ivalue = 0;
	this->sign = 0;
	std::cout << "Default constructor called" << std::endl;
}

 Fixed& Fixed::operator =( const Fixed& a)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &a)
	{
		this->setRawBits(a.getRawBits());
		this->fvalue = a.fvalue;
		this->ivalue = a.ivalue;
		this->sign = a.sign;
	}
	return *this;
}

Fixed::Fixed( const Fixed& a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _binary_point;
}

void Fixed::setRawBits( int const raw )
{
	this->_binary_point = raw;
}

Fixed::Fixed (const int n)
{
	int s = n;
	size_t e = WIDTH;
 
	if (s < 0)
		s *= -1;
	while (s > 2 ^ e)
		s /= 2;
	this->ivalue = s;
	this->fvalue = 0;
	this->sign = (n < 0);
}

Fixed::Fixed (const float n)
{
	float s = n;

	if (s < 0)
		s *= -1;
	this->ivalue = roundf(s);
	this->fvalue = 100 * (s - this->ivalue);
	this->sign = (n < 0);
}

float Fixed::toFloat( void ) const
{
	int s = 1;
	if ( this->sign )
		s = -1;
	return s * ( this->ivalue + this->fvalue ) / ( 10 ^ this->_binary_point );
}

int Fixed::toInt( void ) const
{
	int s = 1;
	if ( this->sign )
		s = -1;
	return s * this->ivalue;
}

std::ostream& operator << (std::ostream &o, const Fixed& p )
{
	if ( p.sign )
		o << "-";
	o << p.ivalue;
	if (p.fvalue != 0)
		o << "." << p.fvalue; 
	return o;
}