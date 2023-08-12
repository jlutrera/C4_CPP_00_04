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

#include "DiamondTrap.hpp"

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
	FragTrap joseph("Joseph");
	DiamondTrap daniel("Daniel");
	
	std::cout << "\n" << std::endl;
	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());
	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());
	std::cout << "\n" << std::endl;

	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());
	jim.takeDamage(9);
	jim.takeDamage(10);
	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());
	std::cout << "\n" << std::endl;

	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());
	joe.beRepaired(10);
	joe.takeDamage(19);
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());
	std::cout << "\n" << std::endl;

	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.guardGate();
	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	std::cout << "\n" << std::endl;

	ft_printPoints(joseph.getNameClass(), joseph.getEnergyPoints(), joseph.getHitPoints(), joseph.getAttackDamage());
	joseph.attack("Maggie");
	joseph.takeDamage(99);
	joseph.beRepaired(50);
	joseph.highFivesGuys();
	ft_printPoints(joseph.getNameClass(), joseph.getEnergyPoints(), joseph.getHitPoints(), joseph.getAttackDamage());
	std::cout << "\n" << std::endl;

	ft_printPoints(daniel.getNameClass(), daniel.getEnergyPoints(), daniel.getHitPoints(), daniel.getAttackDamage());
	daniel.attack("Ned");
	daniel.takeDamage(5);
	daniel.beRepaired(3);
	daniel.guardGate();
	daniel.highFivesGuys();
	daniel.whoAmI();
	ft_printPoints(daniel.getNameClass(), daniel.getEnergyPoints(), daniel.getHitPoints(), daniel.getAttackDamage());
	std::cout << "\n" << std::endl;
	
	return 0;
}