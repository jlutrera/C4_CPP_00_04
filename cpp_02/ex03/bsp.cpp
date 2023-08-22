/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:21:11 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/22 20:21:48 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed surface( Point const a, Point const b, Point const c )
{
	Fixed t1 = ( b.getX() - a.getX() ) * ( c.getY() - a.getY()) / 2;
	Fixed t2 = ( c.getX() - a.getX() ) * ( b.getY() - a.getY()) / 2; 
	Fixed t3 = t1- t2;

	if (t3 < 0)
		t3 = t3 * (-1);
	
	return t3;
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed st = surface(a, b, c);
	std::cout << "\tArea(ABC) = " << st << std::endl;
	Fixed s1 = surface(a, b, p);
	std::cout << "\tArea(ABP) = " << s1 << std::endl;
	Fixed s2 = surface(a, c, p);
	std::cout << "\tArea(ACP) = " << s2 << std::endl;
	Fixed s3 = surface(b, c, p);
	std::cout << "\tArea(BCP) = " << s3 << std::endl;

	if (st == 0)
	{
		std::cout << "\n\nError:  there is not a triangle here" << std::endl;
		std::cout << "\n\nConsequently, the point P ";
		return false;
	}

	if (s1 == 0 || s2 == 0 || s3 == 0)
	{
		std::cout << "\n\nAt least one area is zero.";
		std::cout << YELLOW << " Therefore, point P is on the edge or coincides with one of the vertices." << RESET << std::endl;
		std::cout << "\n\nConsequently, P point ";
		return false;
	}
	
	std::cout << YELLOW << "\n\nAfterward, we can observe the relationship between the areas, which is ... " << RESET << std::endl;
	std::cout << "\t\t" << st;
	if (st == (s1 + s2 + s3))
		std::cout << " = ";
	else
		std::cout << " < ";
	std::cout << s1 << " + " << s2 << " + " << s3 << std::endl;
	std::cout << "\n\nConsequently, P point ";
	
	return st == s1 + s2 + s3;
}
