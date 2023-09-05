/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:44 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:15 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#  define DOG_HPP

#  include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog( void );
		~Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog& other);

		void makeSound( void ) const;
};

#endif
