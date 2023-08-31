/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:00:27 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/31 10:54:00 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string RESET 	= "\033[0m";

static void ft_printPoints( std::string nameclass, int e, int h, int d)
{
	std::cout << nameclass << " has " << e << " energy points, "
			  <<  h << " hit points"
			  << " and " << d << " attack damage points." << std::endl;
}

int main()
{
	std::cout << std::endl;
	std::cout << YELLOW + "Creamos los objetos de la clase" + RESET << std::endl;
	FragTrap joe ("joe");
	FragTrap jane(joe);
	FragTrap peter;

	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <joe> de la clase <FragTrap>" + RESET << std::endl;
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());
	joe.attack("itself");
	joe.beRepaired(10);
	joe.takeDamage(19);
	ft_printPoints(joe.getNameClass(), joe.getEnergyPoints(), joe.getHitPoints(), joe.getAttackDamage());

	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <jane> (que es copia de <joe> al inicio) de la clase <FragTrap>" + RESET << std::endl;
	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.highFivesGuys();
	ft_printPoints(jane.getNameClass(), jane.getEnergyPoints(), jane.getHitPoints(), jane.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <peter> (que se iguala a <joe> ahora) de la clase <FragTrap>" + RESET << std::endl;
	peter = joe;
	ft_printPoints(peter.getNameClass(), peter.getEnergyPoints(), peter.getHitPoints(), peter.getAttackDamage());
	peter.attack("Lisa");
	peter.takeDamage(99);
	peter.beRepaired(50);
	peter.highFivesGuys();
	ft_printPoints(peter.getNameClass(), peter.getEnergyPoints(), peter.getHitPoints(), peter.getAttackDamage());

	std::cout << std::endl;
	std::cout << YELLOW + "Destruimos los objetos de la clase" + RESET << std::endl;
	return 0;
}