/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:48:41 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/29 11:14:09 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

const std::string RESET 	= "\033[0m";
const std::string RED 		= "\033[31m";
const std::string GREEN 	= "\033[32m";
const std::string YELLOW 	= "\033[33m";

Point  ft_asking_points(char c)
{
	float x;
	float y;

	std::cout << YELLOW << "Type the coordinates of " << c << RESET << std::endl;
	std::cout << "\tx = ";
	std::cin >> x;
	std::cout << "\ty = ";
	std::cin >> y;
		
	Point p(x, y);

	return p;
}

int main ( void )
{
	Point A = ft_asking_points('A');
	Point B = ft_asking_points('B');
	Point C = ft_asking_points('C');
	Point P = ft_asking_points('P');

	std::cout << YELLOW << "\n\nFirst, we must calculate the area of each triangle" << RESET << std::endl;
	if ( bsp( A, B, C, P ) )
		std::cout << GREEN << "IS" << RESET;
	else
		std::cout << RED << "IS NOT" << RESET;
    std::cout << " inside the triangle ABC !\n\n" << std::endl;

    return 0;
}