/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:40:51 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:40:51 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"


AMateria::AMateria(std::string const& type) : _type(type)
{
	std::cout << "AMateria <" << YELLOW + _type + RESET << ">: Name constructor" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria <" << YELLOW + _type + RESET << ">: Default destructor"  << std::endl;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::setType(std::string const & type)
{
	_type = type;
}

AMateria::AMateria() : _type("none")
{
	std::cout << "AMateria <" << YELLOW + _type + RESET << ">: Default constructor" << std::endl;
}

AMateria::AMateria(const AMateria & hrs) : _type(hrs.getType())
{
	std::cout << "AMateria <" << YELLOW + _type + RESET << ">: Copy constructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& hrs)
{
	std::cout << "AMateria: Assignment operator overload" << std::endl;
	if (this != &hrs)
		_type = hrs.getType();
	return *this;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* " + YELLOW + _type + RESET + " materia used on " + BLUE + target.getName() + RESET + " character *" << std::endl;
}