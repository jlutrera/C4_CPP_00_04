/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:41:16 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:41:16 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure: Name constructor" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure: Default destructor" << std::endl;
}

Cure::Cure(const Cure& hrs) : AMateria(hrs)
{
	std::cout << "Cure: Copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure& hrs)
{
	std::cout << "Cure: Assignment operator overload" << std::endl;
	/*this does not make sense
	if (this != &hrs)
		_type = hrs.getType();
	*/
	if (this != &hrs)
		AMateria::operator=(hrs);
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* tmp = new Cure();
	std::cout << "Cure: An object has been cloned" << std::endl;
	return tmp;
}

void Cure::use(ICharacter& target)
{
	
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
