/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:00:27 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/08 21:00:27 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

static void ft_printPoints( std::string nameclass, int e, int h, int d)
{
	std::cout << nameclass << " has " << e << " energy points, "
			  <<  h << " hit points"
			  << " and " << d << " attack damage points." << std::endl;
}

int main()
{
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("Joe");
	ScavTrap jane("Jane");

	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());
	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());

	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());
	jim.takeDamage(9);
	jim.takeDamage(10);
	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());

	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());
	joe.beRepaired(10);
	joe.takeDamage(19);
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());

	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.guardGate();
	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	
	return 0;
}