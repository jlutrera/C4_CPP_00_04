/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 11:57:21 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

class Fixed{
	public:
		Fixed();
		Fixed( const int n );
		Fixed( const float n );
		Fixed( const Fixed & a );
		~Fixed();
		Fixed & operator = ( const Fixed & a );
		
		
		int 	getRawBits() const;
		void	setRawBits( int const raw );
		int		getNbBitsFracc() const;
		float 	toFloat() const;
		int 	toInt() const;
	
	private:
		int 				_rawBits;
		static const int	_nbBitsFracc = 8;
};

std::ostream & operator << ( std::ostream & o, const Fixed & p );

#endif