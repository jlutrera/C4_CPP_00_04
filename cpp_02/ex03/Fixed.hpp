/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/08 14:41:23 by jutrera-         ###   ########.fr       */
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
	    Fixed&  operator ++( void );
	    Fixed&  operator --( void );
	    Fixed   operator ++( int );
	    Fixed   operator --( int );

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