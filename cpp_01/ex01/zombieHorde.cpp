/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:07 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 13:44:35 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies = new Zombie[N];
	std::stringstream ss;
    
	for ( int i = 0; i < N; i++ )
	{
		ss << i + 1;
		zombies[i].setName( name + ss.str());
		ss.str("");
	}
	return zombies;
}