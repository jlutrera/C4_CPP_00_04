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

#include "ClapTrap.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string RESET 	= "\033[0m";

static void ft_printPoints( std::string name, int e, int h, int d)
{
	std::cout << name << " has " << e << " energy points, "
			  <<  h << " hit points"
			  << " and " << d << " attack damage points." << std::endl;
}

int main()
{
	std::cout << std::endl;
	std::cout << YELLOW + "Creamos los objetos de la clase" + RESET << std::endl;
	ClapTrap john("John");
	ClapTrap jim;
	ClapTrap joe(john);

	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <jhon> de la clase <ClapTrap>" + RESET << std::endl;
	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());
	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	ft_printPoints(john.getNameClass(), john.getEnergyPoints(), john.getHitPoints(), john.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <jim>, que es igual a <john>,  de la clase <ClapTrap>" + RESET << std::endl;
	jim = john;
	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());
	jim.attack("Peter");
	jim.takeDamage(10);
	ft_printPoints(jim.getNameClass(), jim.getEnergyPoints(), jim.getHitPoints(), jim.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <joe>, que es copia de <john>, de la clase <ClapTrap>" + RESET << std::endl;
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());
	joe.beRepaired(10);
	joe.takeDamage(19);
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());	

	std::cout << std::endl;
	std::cout << YELLOW + "Destruimos los objetos de la clase" + RESET << std::endl;
	return 0;
}