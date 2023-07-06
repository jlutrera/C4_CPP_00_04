/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:45:21 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:45:22 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>

class Fixed{
	public:
		Fixed();
		Fixed& operator= ( const Fixed& a ); 
		Fixed( const Fixed& a );
		~Fixed();
		
		int getRawBits() const;
		void setRawBits( int const raw );

	private:
		int _fixpoint;
		static const int _nb_bits_frac = 8;
};

#endif