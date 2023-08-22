/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:01 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:01 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#  define WRONGANIMAL_HPP

#  include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal& operator=(const WrongAnimal& other);
		std::string getType() const;
		//Falta "virtual" así que no va a funcionar		
		~WrongAnimal();
		void makeSound( void ) const;

	protected:
		std::string _type;
};

#endif