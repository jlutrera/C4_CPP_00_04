#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed& operator= ( const Fixed& ); 
		Fixed( const Fixed& );
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const );

	private:
		int _fixpoint;
		static const int _nb_bits_frac = 8;
};

#endif