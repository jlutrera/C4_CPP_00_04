/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/07 19:04:19 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

class Fixed{
	public:
		Fixed( void );
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed &a );
		~Fixed();
		Fixed& operator =( const Fixed &a );
		
		
		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		getNbBitsFracc( void ) const;
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
	
	private:
		int 				_fixPoint;
		static const int	_nbBitsFrac = 8;
};

std::ostream& operator << ( std::ostream &o, const Fixed &p );

#endif