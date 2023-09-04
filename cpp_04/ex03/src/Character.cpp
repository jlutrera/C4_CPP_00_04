/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:04 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:04 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("noname")
{
	std::cout << "Character: Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = NULL;
		_equiped[i] = 0;
	}
}

Character::~Character()
{
	std::cout << "Character <" << BLUE + _name + RESET << ">: Default destructor" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_slots[i])
			delete _slots[i];
}

Character::Character(std::string ch) : _name(ch)
{
	std::cout << "Character <" << BLUE + _name + RESET << ">: Name constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_slots[i] = NULL;
		_equiped[i] = 0;
	}
}

Character::Character(const Character& hrs) : _name(hrs._name)
{
	std::cout << "Character <" << BLUE + _name + RESET << ">: Copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (hrs._slots[i])
			_slots[i] = hrs._slots[i]->clone();
		else
			_slots[i] = NULL;
		_equiped[i] = hrs._equiped[i];
	}
}

Character& Character::operator=(const Character& hrs)
{
	std::cout << "Character: Assignment operator overload" << std::endl;
	if (this != &hrs)
	{
		_name = hrs._name;
		for (int i = 0; i < 4; i++)
		{
			if (_slots[i])
				delete _slots[i];
			if (hrs._slots[i])
				_slots[i] = hrs._slots[i]->clone();
			else
				_slots[i] = NULL;
			_equiped[i] = hrs._equiped[i];
		}
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	std::cout << "Character <" << BLUE + _name + RESET << ">: Equipping with the " << YELLOW + m->getType() + RESET << " type materia... ";
	int i = 0;
	while (i < 4)
	{
		if (_slots[i] == NULL)
		{
			_slots[i] = m;
			_equiped[i] = 1;
			std::cout << "Slot " << i << GREEN + " equiped & enabled !" + RESET << std::endl;
			return;
		}
		else if (_slots[i] == m)
		{ 
			if (_equiped[i])
				std::cout << "Slot " << i << GREEN + " is already equiped & enabled !" + RESET << std::endl;
			else
			{
				_equiped[i] = 1;
				std::cout << "Slot " << i << GREEN + " is enabled !" + RESET << std::endl;
			}
			return;
		}
		else
			i++;
	}
	std::cout << RED + "Error !" + RESET << std::endl;
}

void Character::unequip(int idx)
{
	std::cout << "Character <" << BLUE + _name + RESET << ">: Unequipping from the materia in slot " << idx << "... ";
	if (idx >= 0 && idx < 4 && _slots[idx])
	{
		if (_equiped[idx])
		{
			std::cout << YELLOW + _slots[idx]->getType() << GREEN + " OK !" + RESET << std::endl;
			_equiped[idx] = 0;
		}
		else
			std::cout << YELLOW + _slots[idx]->getType() << GREEN + " was already unequipped !" + RESET << std::endl;
	}
	else
		std::cout << RED + " Error !" + RESET << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	std::cout << "Character <" << BLUE + _name + RESET << ">: " << target.getName();
	if (idx >= 0 && idx < 4 && _slots[idx])
	{
		std::cout << " use the materia " << YELLOW + _slots[idx]->getType() + RESET << " from the slot " << idx << std::endl;
		_slots[idx]->use(target);
	}
	else
		std::cout << RED + " Error !" + RESET << std::endl;
}

void Character::printEquipment()
{
	std::cout << "************ Character Equipment : " << BLUE + _name + RESET + " ************"<< std::endl;
	for (int i = 0; i < 4; i++)
	{	
		std::cout << "slots [" << i << "] = ";
		if (_slots[i])
			std::cout << _slots[i]->getType() << "(" << _slots[i] << ")" << std::endl;
		else
			std::cout << "(empty) " << std::endl;
	}
}