/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/07 12:43:53 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

#  define WIDTH 8;

class Fixed{
	
	public:
		Fixed();
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed & a );
		~Fixed();
		Fixed & operator = ( const Fixed & a );

		Fixed & operator > ( const Fixed & a );
		Fixed & operator < ( const Fixed & a );
		Fixed & operator >= ( const Fixed & a );
		Fixed & operator <= ( const Fixed & a );
		Fixed & operator == ( const Fixed & a );
		Fixed & operator != ( const Fixed & a );

		Fixed & operator + ( const Fixed & a );
		Fixed & operator - ( const Fixed & a );
		Fixed & operator * ( const Fixed & a );
		Fixed & operator / ( const Fixed & a );

		Fixed & operator ++ ( int a );
		Fixed & operator -- ( int a );
		Fixed & operator ++ ( );
		Fixed & operator -- ( );

		static Fixed & min(const Fixed &a, const Fixed & b);
		static Fixed & min(Fixed & a, Fixed & b);
		static Fixed & max(const Fixed &a, const Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);

		
		int 	getRawBits() const;
		void	setRawBits( int const raw );
		int		getNbBitsFracc() const;
		float 	toFloat() const;
		int 	toInt() const;
	
	private:
		int 				_rawBits;
		static const int	_nbBitsFracc = WIDTH;
};

std::ostream & operator << ( std::ostream & o, const Fixed & p );

#endif