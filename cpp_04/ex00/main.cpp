/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:50 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:50 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongCat();
	//const WrongCat* k = new WrongCat();

	std::cout << std::endl;
	std::cout << j->getType() << " : ";
	j->makeSound();
	std::cout << i->getType() << " : ";
	i->makeSound();

	//se ejecuta WrongAnimal::makesound pero no WrongCat::makesound
	std::cout << k->getType() << " : ";
	k->makeSound();

	std::cout << meta->getType() << " : ";
	meta->makeSound();
	std::cout << meta2->getType() << " : ";
	meta2->makeSound();
	std::cout << std::endl;
	
	//liberamos memoria

	delete(k); 
	delete(i);
	delete(j);
	delete(meta2);
	delete(meta);
	
	return 0;
}