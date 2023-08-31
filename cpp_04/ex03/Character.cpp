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

#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
}

Character::~Character()
{

}

Character::Character(std::string ch)
{

}

Character::Character(const Character& hrs)
{

}

Character& Character::operator=(const Character& hrs)
{

}

std::string const & Character::getName() const
{

}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (_slots[i] != NULL && i < 4)
		i++;
	if (i < 4)
		_slots[i] = m;
}

void Character::unequip(int idx)
{
	//antes, debo guardar la dirección de AMateria desequipada, no se borra
	if (_slots[idx])
	{
		_unequipments[idx] = _slots[idx];
		_slots[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	
	AMateria::use(target);
}
