#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed( const Fixed& );
		Fixed (const int);
		Fixed (const float);
		~Fixed();
		Fixed& operator = ( const Fixed& );
		
		int getRawBits( void ) const;
		void setRawBits( int const );
		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int _fixpoint;
		static const int _nb_bits = 8;
		int _value;
};

std::ostream& operator << (std::ostream&, const Fixed& );
#endif