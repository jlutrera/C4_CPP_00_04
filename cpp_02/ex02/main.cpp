/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:48:41 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/08 14:36:23 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed const a (23.4f);
	Fixed const b( 5.05f );
	Fixed c(5);

	std::cout << "COMPARISON OPERATIONS" << std::endl;
	std::cout << "\t" << a << " < "  << b << " is " << (a < b)  << std::endl;
	std::cout << "\t" << a << " > "  << b << " is " << (a > b)  << std::endl;
	std::cout << "\t" << a << " <= " << b << " is " << (a <= b) << std::endl;
	std::cout << "\t" << a << " >= " << b << " is " << (a >= b) << std::endl;
	std::cout << "\t" << a << " == " << b << " is " << (a == b) << std::endl;
	std::cout << "\t" << a << " != " << b << " is " << (a != b) << std::endl;

	std::cout << "ARITHMETIC OPERATIONS" << std::endl;
	std::cout << "\t" << a << " * " << b << " = " << a * b << std::endl;
	std::cout << "\t" << a << " + " << b << " = " << a + b << std::endl;
	std::cout << "\t" << a << " - " << b << " = " << a - b << std::endl;
	std::cout << "\t" << a << " / " << b << " = " << a / b << std::endl;
	
	std::cout << "INCREMENT / DECREMENT OPERATIONS" << std::endl;
	std::cout << "\tbefore = " << c << "\t\tpreincrement = " << ++c  << "\t\tafter = " << c << std::endl;
	std::cout << "\tbefore = " << c << "\tpostincrement = " << c++ << "\t\tafter = " << c << std::endl;
	std::cout << "\tbefore = " << c << "\tpredecrement = " << --c  << "\t\tafter = " << c << std::endl;
	std::cout << "\tbefore = " << c << "\tpostdecrement = " << c-- << "\t\tafter = " << c << std::endl;

	std::cout << "MAX AND MIN OPERATIONS" << std::endl;
	std::cout << "\tmin of " << b << " and " << c << " = " << Fixed::min(b, c) << std::endl;
	std::cout << "\tmax of " << a << " and " << b << " = " << Fixed::max( a, b ) << std::endl;
	
	return 0;
}
