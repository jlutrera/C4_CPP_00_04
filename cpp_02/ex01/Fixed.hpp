#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

#  define WIDTH 8;

class Fixed{
	public:
		Fixed();
		Fixed (const int);
		Fixed (const float);
		~Fixed();
		Fixed& operator = ( const Fixed& );
		Fixed( const Fixed& );
		
		int getRawBits( void ) const;
		void setRawBits( int const );
		float toFloat( void ) const;
		int toInt( void ) const;
		int fvalue;
		int ivalue;
		bool sign;
	
	private:
		int _binary_point;
		static const int _nb_bits = WIDTH;

		float _value;

};

std::ostream& operator << (std::ostream&, const Fixed& );
#endif