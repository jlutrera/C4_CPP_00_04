/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:36 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:36 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#  define ANIMAL_HPP

#  include <iostream>
#  include "Brain.hpp"

const std::string YELLOW 	= "\033[33m";
const std::string GREEN 	= "\033[32m";
const std::string RESET 	= "\033[0m";

class Animal
{
	public:
		Animal( void );
		Animal(std::string type);
		Animal(const Animal &other);
		Animal& operator=(const Animal& other);
		std::string getType() const;
		virtual ~Animal();
		virtual void makeSound( void ) const;

	protected:
		std::string _type;
};

#endif