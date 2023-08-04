/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:45:21 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 11:57:52 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#  define FIXED_HPP

#  include <iostream>
/*
        We can define class members static using static keyword. When we declare
        a member of a class as static it means no matter how many objects of the class are created, 
        there is only one copy of the static member.
        A static member is shared by all objects of the class. All static data is initialized to zero
        when the first object is created, if no other initialization is present. We can't put it in the 
        class definition but it can be initialized outside the by redeclaring the static variable, 
        using the scope resolution operator :: to identify which class it belongs to.
*/
class Fixed{
	public:
		Fixed();
		Fixed( const Fixed & a );
		~Fixed();
		Fixed & operator = ( const Fixed & a ); 
		
		int getRawBits() const;
		void setRawBits( int const raw );

	private:
		int _fixPoint;
		static const int _nbBitsFrac = 8;
};

#endif