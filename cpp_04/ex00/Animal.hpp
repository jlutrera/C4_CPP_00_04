/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:24 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:04 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#  define ANIMAL_HPP

#  include <iostream>

class Animal
{
	public:
		Animal( void );
		Animal(std::string type);
		Animal(const Animal &other);
		virtual ~Animal();
		virtual Animal& operator=(const Animal& other);
		
		std::string getType() const;
		virtual void makeSound( void ) const;

	protected:
		std::string _type;
};

#endif
