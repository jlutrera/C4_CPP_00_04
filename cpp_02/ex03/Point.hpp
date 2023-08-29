/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:38:29 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/29 11:13:54 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( Point const &p);
		~Point();
		Point( const float x, const float y);
		Point& operator =( Point const &p);
		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif