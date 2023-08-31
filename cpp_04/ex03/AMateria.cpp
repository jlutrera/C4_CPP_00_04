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

#include "AMateria.hpp"

AMateria::AMateria(std::string const& type) : _type(type)
{

}

std::string const & AMateria::getType() const
{
	return _type;
}

AMateria::AMateria() : _type("")
{

}

AMateria::AMateria(const AMateria & hrs) : _type(hrs.getType())
{

}

AMateria& AMateria::operator=(const AMateria& hrs)
{
	if (this != &hrs)
		_type = hrs.getType();
	return *this;
}

void AMateria::use(ICharacter &target)
{

}