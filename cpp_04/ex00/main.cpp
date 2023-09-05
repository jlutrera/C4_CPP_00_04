/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:50 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:18 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string RESET 	= "\033[0m";

int main()
{
	std::cout << std::endl;
	std::cout << YELLOW + "*** CREATING OBJECTS ***" + RESET << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	const WrongCat caty;
	std::cout << std::endl;
	std::cout << YELLOW + "*** THESE ARE THE CORRECT IMPLEMENTATION ***" + RESET << std::endl;
	std::cout << j->getType() << " : ";
	j->makeSound();
	std::cout << i->getType() << " : ";
	i->makeSound();	
	std::cout << meta->getType() << " : ";
	meta->makeSound();

	//se ejecuta WrongAnimal::makesound pero no WrongCat::makesound
	std::cout << std::endl;
	std::cout << YELLOW + "*** THESE ARE THE INCORRECT IMPLEMENTATION ***" + RESET << std::endl;
	std::cout << k->getType() << " : ";
	k->makeSound();
	std::cout << meta2->getType() << " : ";
	meta2->makeSound();
	std::cout << caty.getType() << " : ";
	caty.makeSound();
	std::cout << std::endl;
	
	//liberamos memoria
	std::cout << std::endl;
	std::cout << YELLOW + "*** DESTROYING OBJECTS ***" + RESET << std::endl;
	delete(k); 
	delete(i);
	delete(j);
	delete(meta2);
	delete(meta);
	
	return 0;
}
