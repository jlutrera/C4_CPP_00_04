/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:11 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:47:10 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string GREEN 	= "\033[32m";
const std::string RESET 	= "\033[0m";

int main()
{
	std::cout << std::endl;
	std::cout << GREEN + "*** FIRST TEST ***" + RESET << std::endl;
	std::cout << YELLOW + "Creating animals with brains" + RESET << std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();
	std::cout << YELLOW + "Deleting animals and its brains" + RESET << std::endl;
    delete j;
    delete i;
	
	std::cout << std::endl;
	std::cout << YELLOW + "Probando que hago una copia profunda" + RESET << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	basic.setBrain(0, "Cuántos animalitos tengo alrededor");
	std::cout << "    basic : type(" << basic.getType() << ")   brain(" << basic.getBrain(0) << ")" << std::endl; 
	
	std::cout << std::endl;
	std::cout << GREEN + "*** SECOND TEST ***" + RESET << std::endl;	
	std::cout << YELLOW + "Creating an array of 4 animals with brains" + RESET << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	std::cout << YELLOW + "Deleting animals and its brains" + RESET << std::endl;
    for ( int n = 0; n < 4; n++ )
        	delete animals[n];

	std::cout << std::endl;
	std::cout << GREEN + "*** THIRD TEST ***" + RESET << std::endl;	
	std::cout << YELLOW + "Creating Dogs and using overload = and copy constructor" + RESET << std::endl;
	Dog dog1;
	dog1.setBrain(0, "mi primera idea");
	std::cout << "    dog1 : type(" << dog1.getType() << ")   brain(" << dog1.getBrain(0) << ")" << std::endl; 
	Dog dog2;
	dog2.setBrain(0, "tengo ideas propias");
	std::cout << "    dog2 : type(" << dog2.getType() << ")   brain(" << dog2.getBrain(0) << ")" << std::endl; 
	dog2 = dog1;
	std::cout << "    dog2 : type(" << dog2.getType() << ")   brain(" << dog2.getBrain(0) << ")" << std::endl; 
	Dog dog3(dog1);
	dog1.setBrain(0, "brrrrrrrrrr");
	std::cout << "    dog3 : type(" << dog3.getType() << ")   brain(" << dog3.getBrain(0) << ")" << std::endl; 
	std::cout << "    dog1 : type(" << dog1.getType() << ")   brain(" << dog1.getBrain(0) << ")" << std::endl; 
	std::cout << YELLOW + "Creating Cats and using overload = and copy constructor" + RESET << std::endl;
	Cat cat1;
	cat1.setBrain(0, "my first idea");
	std::cout << "    cat1 : type(" << cat1.getType() << ")   brain(" << cat1.getBrain(0) << ")" << std::endl; 
	Cat cat2;
	std::cout << "    cat2 : type(" << cat2.getType() << ")   brain(" << cat2.getBrain(0) << ")" << std::endl; 
	cat2 = cat1;
	std::cout << "    cat2 : type(" << cat2.getType() << ")   brain(" << cat2.getBrain(0) << ")" << std::endl; 
	Cat cat3(cat1);
	cat1.setBrain(0,"psssssssssssssssss");
	std::cout << "    cat3 : type(" << cat3.getType() << ")   brain(" << cat3.getBrain(0) << ")" << std::endl; 	
	std::cout << "    cat1 : type(" << cat1.getType() << ")   brain(" << cat1.getBrain(0) << ")" << std::endl; 
	
	std::cout << std::endl;
	std::cout << GREEN + "*** DELETING ***" + RESET << std::endl;	
	std::cout << YELLOW + "Deleting cats and dogs and its brains" + RESET << std::endl;

	return 0;
}
