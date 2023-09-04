/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:07:00 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/04 21:07:00 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"

void test1()
{
	std::cout << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "*  TESTING FROM THE SUBJECT   *" << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	me->unequip(1);
	me->use(1, *bob);	
	tmp = src->createMateria("cure");
	
	me->equip(tmp);
	me->use(1, *bob);	

	delete bob;
	delete me;
	delete src;
}

void test2()
{	
	std::cout << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "* TESTING MATERIASOURCE CLASS *" << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << std::endl;

	MateriaSource ms1;
	ms1.learnMateria(new Ice());
	ms1.learnMateria(new Ice());
	ms1.learnMateria(new Cure());
	std::cout << "********Materias de ms1**********" << std::endl;
	ms1.printMaterias();
	std::cout << std::endl;
	{
		MateriaSource ms2(ms1);
		ms2.learnMateria(new Cure());
		ms2.learnMateria(new Cure());
		std::cout << "********Materias de ms2**********" << std::endl;
		ms2.printMaterias();
		std::cout << std::endl;
	}
	{
		MateriaSource ms3;
		ms3.learnMateria(new Cure());
		std::cout << "********Materias de ms3**********" << std::endl;
		ms3.printMaterias();
		ms3 = ms1;
		std::cout << "********Materias de ms1**********" << std::endl;
		ms1.printMaterias();
		std::cout << std::endl;
		ms3.learnMateria(new Cure());
		ms3.learnMateria(new Ice());
		std::cout << "********Materias de ms3**********" << std::endl;
		ms3.printMaterias();
		std::cout << std::endl;
	}
	std::cout << "********Materias de ms1**********" << std::endl;
	ms1.printMaterias();
	std::cout << std::endl;
}

void test3()
{
	std::cout << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << "*   TESTING CHARACTER CLASS   *" << std::endl;
	std::cout << "*******************************" << std::endl;
	std::cout << std::endl;

	Character uno("uno");
	uno.equip(new Ice());
	uno.equip(new Cure());
	uno.printEquipment();
{
	Character dos(uno);
	dos.printEquipment();
	dos.equip(new Ice());
	dos.equip(new Cure());
	dos.printEquipment();
}
	Character tres("tres");
	tres.equip(new Ice());
	tres.printEquipment();
	tres = uno;
	tres.printEquipment();
}

int main()
{
	int g;

	do
	{
		std::cout << "****************************************" << std::endl;
		std::cout << "* Select test: (Any other key to exit) *" << std::endl;
		std::cout << "*     1. From the subject              *" << std::endl;
		std::cout << "*     2. MateriaSource class copies    *" << std::endl;
		std::cout << "*     3. Character class copies        *" << std::endl;
		std::cout << "****************************************" << std::endl;
		std::cout << " > ";
		std::cin >> g;
		switch (g)
		{
			case 1: test1();
					break;
			case 2: test2();
					break;
			case 3: test3();
					break;
		}
	}
	while (g == 1 || g == 2 || g == 3);

	return 0;
}