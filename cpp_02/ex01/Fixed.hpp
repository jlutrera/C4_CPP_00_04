/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:46:23 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 18:01:59 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
#  include <cmath>

#  define WIDTH 8;

typedef struct s_fixpt{
	size_t fvalue;
	size_t ivalue;
	size_t sign;
} fixpt;

class Fixed{
	public:
		Fixed();
		Fixed (const int n );
		Fixed (const float n );
		~Fixed();
		Fixed& operator = ( const Fixed& a );
		Fixed( const Fixed& a );
		
		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat() const;
		int toInt() const;
		fixpt fixnb;
	
	private:
		int _binary_point;
		static const int _nb_bits = WIDTH;
};

std::ostream& operator << (std::ostream& o, const Fixed& p);
#endif