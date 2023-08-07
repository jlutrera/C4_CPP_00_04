/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 20:21:11 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/07 19:01:42 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
Let the coordinates of three vertices A(x1, y1), B(x2, y2) and C(x3, y3). And coordinates of the given point P(x, y)

Calculate area of the given triangle, i.e., area of the triangle ABC in the above diagram. 
             Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2) ] / 2 
Calculate area of the triangle PAB. We can use the same formula for this. Let this area be A1. 
Calculate area of the triangle PBC. Let this area be A2. 
Calculate area of the triangle PAC. Let this area be A3. 

If A1, A2 or A2 is zero, then P point is on the edge or coincides with one of the vertices. 
And P is not inside the triangle !!!!

If P lies inside the triangle, then A1 + A2 + A3 must be equal to A. 
*/
Fixed surface( Point const a, Point const b, Point const c )
{
	Fixed t1 = a.getX() * (b.getY() - c.getY()) / 2;
	Fixed t2 = b.getX() * (a.getY() - c.getY()) / 2; 
	Fixed t3 = c.getX() * (b.getY() - a.getY()) / 2;

	if (t1 < 0)
		t1 = t1 * (-1);
	if (t2 < 0)
		t2 = t2 * (-1);
	if (t3 < 0)
		t3 = t3 * (-1);
	
	return t1 + t2 + t3;
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
