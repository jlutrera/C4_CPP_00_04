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

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria & hrs) : AMateria()
{
	*this = hrs;
}

AMateria& AMateria::operator=(const AMateria& hrs)
{
	
}

AMateria* AMateria::clone() const
{

}

void AMateria::use(ICharacter &target)
{

}