/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:50 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:50 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: Default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
			_storedMaterias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource: Default destructor" << std::endl;
	for (int i = 0; i < 4; i++)
			if (_storedMaterias[i])
				delete _storedMaterias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource & hrs)
{
	std::cout << "MateriaSource: Assignment operator overload" << std::endl;	
	if (this != &hrs)
		for (int i = 0; i < 4; i++)
		{
				if (_storedMaterias[i])
					delete _storedMaterias[i];
				if (hrs._storedMaterias[i])
					_storedMaterias[i] = hrs._storedMaterias[i]->clone();
				else
					_storedMaterias[i] = NULL;
		}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource & hrs)
{
	std::cout << "MateriaSource: Copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
			if (hrs._storedMaterias[i])
				_storedMaterias[i] = hrs._storedMaterias[i]->clone();
			else
				_storedMaterias[i] = NULL;
}

void MateriaSource::learnMateria(AMateria* k)
{
	int i = 0;
	while (i < 4 && _storedMaterias[i] != NULL && _storedMaterias[i] != k)
		i++;
	if (i < 4 && _storedMaterias[i] != k)
	{
		_storedMaterias[i] = k;
		std::cout << "MateriaSource: The " << YELLOW + k->getType() + RESET << " materia was saved in slot " << i << std::endl;
	}
	else if (i == 4)
	{
		std::cout << "MateriaSource: It was not possible save the " << YELLOW + k->getType() + RESET << " materia.  The inventory is full" << std::endl;
		delete k;
	}
	else
		std::cout << "MateriaSource: This materia is already in the inventory" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "MateriaSource: Looking for the materia " << YELLOW + type + RESET << "... ";
	int i = 0;
	while (i < 4 && _storedMaterias[i] && _storedMaterias[i]->getType() != type)
		i++;
	if (i < 4 && _storedMaterias[i])
	{
		std::cout << GREEN + "Found in slot " << i << RESET << std::endl; 
		return _storedMaterias[i]->clone();
	}
	std::cout << RED + "Error !" + RESET << std::endl;
	return NULL;
}

void MateriaSource::printMaterias( void )
{
	for (int i = 0; i < 4 ; i++)
	{
		std::cout << "[" << i << "] = ";
		if (_storedMaterias[i])
			std::cout << _storedMaterias[i]->getType() << "(" << _storedMaterias[i] << ")";
		else
			std::cout << "(null)";
		std::cout << std::endl;
	}
}