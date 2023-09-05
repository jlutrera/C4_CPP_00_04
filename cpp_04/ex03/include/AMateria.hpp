/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:40:55 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:40:15 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#  define AMATERIA_HPP

#  include <iostream>
#  include "../interface/ICharacter.hpp"

const std::string RESET 	= "\033[0m";
const std::string BLUE 		= "\033[36m";
const std::string YELLOW 	= "\033[33m";
const std::string GREEN 	= "\033[32m";
const std::string RED 		= "\033[31m";

class ICharacter;
/*Forward declaration in C++ allows you to declare an identifier before it is defined. 
This means you can inform the compiler about a class, function, or variable before it is used in code. 
A declaration statement without a definition is used to achieve this.*/

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria & hrs);
		virtual AMateria & operator=(const AMateria & hrs);
		virtual ~AMateria();
		void setType(std::string const & type);

		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual void use(ICharacter& target);

		//Método virtual puro: Imposibilita instanciar la clase. La función se implementa en la/s clase/s derivada/s
		virtual AMateria* clone() const = 0; 		

	protected:
		std::string _type;
		
};

#endif
