/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:07 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:07 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#  define DOG_HPP

#  include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog( void );
		virtual ~Dog();
		Dog(const Dog &other);
		Dog& operator=(const Dog& other);

		virtual void makeSound( void ) const;
		std::string getBrain(int i) const;
		void setBrain(int i, std::string str);

	private:
		Brain* _brain;
};

#endif