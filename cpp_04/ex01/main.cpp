/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:11 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:11 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
        delete animals[i];
	
	const Dog k;
	const Dog tmp = k;
	const Dog tmp2(k);
	
	std::cout << "k : type(" << k.getType() << ")   brain(" << k.getBrain() << ")" << std::endl; 
	std::cout << "tmp : type(" << tmp.getType() << ")   brain(" << tmp.getBrain() << ")" << std::endl; 
	std::cout << "tmp2 : type(" << tmp2.getType() << ")   brain(" << tmp2.getBrain() << ")" << std::endl; 
	
	const Cat k3;
	const Cat tmp3= k3;
	const Cat tmp23(k3);
	
	
	std::cout << "k3 : type(" << k3.getType() << ")   brain(" << k3.getBrain() << ")" << std::endl; 
	std::cout << "tmp3 : type(" << tmp3.getType() << ")   brain(" << tmp3.getBrain() << ")" << std::endl; 
	std::cout << "tmp23 : type(" << tmp23.getType() << ")   brain(" << tmp23.getBrain() << ")" << std::endl; 
	return 0;
}