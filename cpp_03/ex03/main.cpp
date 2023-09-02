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
	DiamondTrap daniel("Daniel");
	DiamondTrap mary("mary");
	DiamondTrap peter(daniel);
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <daniel> de la clase <DiamondTrap>" + RESET << std::endl;
	ft_printPoints(daniel.getNameClass(), daniel.getEnergyPoints(), daniel.getHitPoints(), daniel.getAttackDamage());
	daniel.attack("Ned");
	daniel.takeDamage(5);
	daniel.beRepaired(3);
	daniel.guardGate();
	daniel.highFivesGuys();
	daniel.whoAmI();
	ft_printPoints(daniel.getNameClass(), daniel.getEnergyPoints(), daniel.getHitPoints(), daniel.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el objeto <mary> de la clase <DiamondTrap>" + RESET << std::endl;
	ft_printPoints(mary.getNameClass(), mary.getEnergyPoints(), mary.getHitPoints(), mary.getAttackDamage());
	mary.attack("Ned");
	mary.takeDamage(1);
	mary.beRepaired(1);
	mary.guardGate();
	mary.highFivesGuys();
	mary.whoAmI();
	ft_printPoints(mary.getNameClass(), mary.getEnergyPoints(), mary.getHitPoints(), mary.getAttackDamage());
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probamos la sobrecarga del operador de asignación, con <mary>=<daniel>" + RESET << std::endl;
	mary = daniel;
	ft_printPoints(mary.getNameClass(), mary.getEnergyPoints(), mary.getHitPoints(), mary.getAttackDamage());
	mary.attack("Ned");
	mary.takeDamage(5);
	mary.beRepaired(3);
	mary.guardGate();
	mary.highFivesGuys();
	mary.whoAmI();
	ft_printPoints(mary.getNameClass(), mary.getEnergyPoints(), mary.getHitPoints(), mary.getAttackDamage());

	std::cout << std::endl;
	std::cout << YELLOW + "Probamos el constructor de copia con el objeto <peter> ( que es copia de <daniel> )" + RESET << std::endl;
	ft_printPoints(peter.getNameClass(), peter.getEnergyPoints(), peter.getHitPoints(), peter.getAttackDamage());
	peter.attack("Ned");
	peter.attack("Ned");
	peter.attack("Ned");
	peter.takeDamage(18);
	peter.beRepaired(5);
	peter.guardGate();
	peter.highFivesGuys();
	peter.whoAmI();
	ft_printPoints(peter.getNameClass(), peter.getEnergyPoints(), peter.getHitPoints(), peter.getAttackDamage());

	std::cout << std::endl;
	std::cout << YELLOW + "Probamos que el objeto <peter>  es diferente del objeto <daniel>" + RESET << std::endl;
	std::cout << "<peter> : ";
	ft_printPoints(peter.getNameClass(), peter.getEnergyPoints(), peter.getHitPoints(), peter.getAttackDamage());
	std::cout << "<daniel> : ";
	ft_printPoints(daniel.getNameClass(), daniel.getEnergyPoints(), daniel.getHitPoints(), daniel.getAttackDamage());
	std::cout << std::endl;
	std::cout << YELLOW + "Destruimos los objetos de la clase" + RESET << std::endl;

	return 0;
}