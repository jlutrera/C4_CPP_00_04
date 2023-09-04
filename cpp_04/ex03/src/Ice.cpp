/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:26 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:26 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice: Name constructor" << std::endl;	
}

Ice::~Ice()
{
	std::cout << "Ice: Default destructor" << std::endl;	
}

Ice& Ice::operator=(const Ice &hrs)
{
	std::cout << "Ice: Assignment operator overload" << std::endl;
	/*This does not make sense
	if (this != &hrs)
		_type = hrs.getType();
	*/
	if (this != &hrs)
		AMateria::operator=(hrs);
	return *this;
}

Ice::Ice(const Ice & hrs) : AMateria(hrs)
{
	std::cout << "Ice: Copy constructor" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* tmp = new Ice();
	std::cout << "Ice: An object has been cloned" << std::endl;
	return tmp;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}