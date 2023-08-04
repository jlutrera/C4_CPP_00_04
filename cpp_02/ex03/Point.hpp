/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:38:29 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/02 19:38:29 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

const std::string RESET 	= "\033[0m";
const std::string RED 		= "\033[31m";
const std::string GREEN 	= "\033[32m";
const std::string YELLOW 	= "\033[33m";

class Point
{
	public:
		Point();
		Point( Point const &p);
		~Point();
		Point( const float a, const float b);
		Point& operator =( Point const &p);
		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const p);

#endif