/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/08 14:06:37 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

class Fixed
{
	public:
    	Fixed( void );
    	Fixed( const int n );
    	Fixed( const float n );
    	Fixed( const Fixed &rhs );
    	Fixed& operator =( const Fixed &rhs );
    	~Fixed();
    	int     getRawBits( void ) const;
    	void    setRawBits( int const raw );
    	float   toFloat( void ) const;
    	int     toInt( void ) const;

	    bool    operator >( const Fixed &rhs ) const ;
	    bool    operator <( const Fixed &rhs ) const ;
	    bool    operator >=( const Fixed &rhs ) const ;
	    bool    operator <=( const Fixed &rhs ) const ;
	    bool    operator ==( const Fixed &rhs ) const ;
	    bool    operator !=( const Fixed &rhs ) const ;

	    Fixed   operator +( const Fixed &rhs ) const ;
	    Fixed   operator -( const Fixed &rhs ) const ;
	    Fixed   operator *( const Fixed &rhs ) const ;
	    Fixed   operator /( const Fixed &rhs ) const ;

	    Fixed&  operator ++( void ); // prefix
		Fixed&  operator --( void ); // prefix
	    Fixed   operator ++( int ); // postfix
	    Fixed   operator --( int ); // postfix
   		/*
        Static Function Members
        By declaring a function member as static, you make it independent of any
         particular object of the class. A static member function can be called 
         even if no objects of the class exist and the static functions are accessed
         using only the class name and the scope resolution operator ::.

        A static member function can only access static data member, other static
        member functions and any other functions from outside the class.

        Static member functions have a class scope and they do not have access
        to the this pointer of the class. You could use a static member function
        to determine whether some objects of the class have been created or not.
    	*/
	    static Fixed& min( Fixed &a, Fixed &b );
		static Fixed& max( Fixed &a, Fixed &b );
	    static const Fixed& min( const Fixed &a, const Fixed &b );
	    static const Fixed& max( const Fixed &a, const Fixed &b );

	private:
	    int                 _fixPoint;
	    static const int    _nbBitsFrac = 8;
};

	std::ostream& operator <<( std::ostream &o, Fixed const &i );

#endif