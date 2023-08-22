/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:40:55 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:40:55 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#  define AMATERIA_HPP

#  include <iostream>
#  include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string const& _type;
	public:
		AMateria();
		AMateria(const AMateria& hrs);
		AMateria& operator=(const AMateria& hrs);
		virtual ~AMateria();

		AMateria(std::string const& type);
		std::string const& getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif