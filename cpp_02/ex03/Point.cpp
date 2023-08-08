/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:59:51 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/08 15:00:00 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 )
{

}

Point::Point( Point const &p) : _x( p._x ), _y( p._y )
{

}

Point::~Point()
{

}

Point::Point( float const x, float const y) : _x( x ), _y( y )
{

}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

Point& Point::operator =( Point const &p )
{
	if (this != &p)
	{
		static_cast<Fixed>(_x) = p.getX();
		static_cast<Fixed>(_y) = p.getY();
	}
	return *this;
}
