/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:32:36 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:32:36 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/******************************************************************************/
/*Interface is a class that contains only pure virtual functions and foce
the subclasses to implement them.

C++ virtual function:
	- A C++ virtual function is a member function in the base class that you redefine
	  in a derived class. It is declared using the virtual keyword.
	- It is used to tell the compiler to perform dynamic linkage or late binding
	  on the function.
	- There is a necessity to use the single pointer to refer to all the objects of 
	  the different classes. So, we create the pointer to the base class that refers
	  to all the derived objects. But, when base class pointer contains the address of
	  the derived class object, always executes the base class function. This issue
	  can only be resolved by using the 'virtual' function.
	- A 'virtual' is a keyword preceding the normal declaration of a function.
	- When the function is made virtual, C++ determines which function is to be invoked
	  at the runtime based on the type of the object pointed by the base class pointer.

Virtual means the the linkage will be dynamic not static.  Explaination:
	- At the beginning, we had a statis relution of the function calls, It means that
      during the compilation, (the compiler) we already will know which function to call.
      and for this we use the type of the variable.
    - The only way for the compiler to know the behavior of my object is by knowing its 
	  type. and we marked it as a Character type. and the compiler will assume that its
	  a Character.
    - Therefore, it uses the Character version of the function.
    - It was a static link! means that during the compilation is determined it won't 
	  change later.
    - However, during the compilation let assume that we don't want it as a Warriror,
	  but as a Wizard. It may point on a Warrior once and on the Wizard once based 
	  on what the user input.
    - Thanks to the virtual, the resulotion of the function call wil be dynamic. and it
      wiil be decided at runtime.
    -  When we call the member function, during the execution becauese it's a function with 
      a dynamic link, it will look for the actual type of the object. It will walk 
      through the inheritance tree to find the actual type.
    -  A virtual member function is called a method.
    - The definition of a method is a member function which resulotion will be dynamic.

Rules of Virtual Function:
    - Virtual functions must be members of some class.
    - Virtual functions cannot be static members.
    - They are accessed through object pointers.
    - They can be a friend of another class.
    - A virtual function must be defined in the base class, even though it is not used.
    - The prototypes of a virtual function of the base class and all the derived classes 
      must be identical. If the two functions with the same name but different prototypes,
      C++ will consider them as the overloaded functions.
    - We cannot have a virtual constructor, but we can have a virtual destructor

The order of constructor and destructor:
    1. Base constructor
    2. Derived constructor
    3. Derived destructor
    4.Base destructor*/
/*************************************************************************************/

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string GREEN 	= "\033[32m";
const std::string RESET 	= "\033[0m";

int main()
{
	//AAnimal ejemplo;   is not allowed !!!
	std::cout << std::endl;
	std::cout << GREEN + "*** FIRST TEST ***" + RESET << std::endl;
	std::cout << YELLOW + "Creating animals with brains" + RESET << std::endl;
	const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
	std::cout << YELLOW + "Deleting animals and its brains" + RESET << std::endl;
    delete j;
    delete i;

	std::cout << std::endl;
	std::cout << GREEN + "*** SECOND TEST ***" + RESET << std::endl;	
	std::cout << YELLOW + "Creating an array of 4 animals with brains" + RESET << std::endl;
    const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	std::cout << YELLOW + "Deleting animals and its brains" + RESET << std::endl;
    for ( int n = 0; n < 4; n++ )
	{
        delete animals[n];
	}

	std::cout << std::endl;
	std::cout << GREEN + "*** THIRD TEST ***" + RESET << std::endl;	
	std::cout << YELLOW + "Creating a Dog and using overload = and copy constructor" + RESET << std::endl;
	Dog dog1;
	dog1.setBrain(0, "mi primera idea");
	Dog dog2;
	Dog dog3(dog1);
	dog2 = dog1;
	dog2.setBrain(0, "tengo ideas propias");
	std::cout << "dog1 : type(" << dog1.getType() << ")   brain(" << dog1.getBrain(0) << ")" << std::endl; 
	std::cout << "dog2 : type(" << dog2.getType() << ")   brain(" << dog2.getBrain(0) << ")" << std::endl; 
	std::cout << "dog3 : type(" << dog3.getType() << ")   brain(" << dog3.getBrain(0) << ")" << std::endl; 
	
	std::cout << YELLOW + "Creating a Dog and using overload = and copy constructor" + RESET << std::endl;
	Cat cat1;
	cat1.setBrain(0, "my first idea");
	Cat cat2;
	Cat cat3(cat1);
	cat2 = cat1;
	std::cout << "cat1 : type(" << cat1.getType() << ")   brain(" << cat1.getBrain(0) << ")" << std::endl; 
	std::cout << "cat2 : type(" << cat2.getType() << ")   brain(" << cat2.getBrain(0) << ")" << std::endl; 
	std::cout << "cat3 : type(" << cat3.getType() << ")   brain(" << cat3.getBrain(0) << ")" << std::endl; 	
	std::cout << YELLOW + "Deleting cats and dogs and its brains" + RESET << std::endl;

	return 0;
}