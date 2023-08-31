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

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& hrs)
{
	_type = "cure";
}

Cure& Cure::operator=(const Cure& hrs)
{
	/*this does not make sense
	if (this != &hrs)
		_type = hrs.getType();
	*/
	return *this;
}

AMateria* Cure::clone() const
{
	return &Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << _type << "'s wounds *";
}
