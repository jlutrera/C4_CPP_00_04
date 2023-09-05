/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:01 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:48:23 by jutrera-         ###   ########.fr       */
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
		virtual WrongAnimal& operator=(const WrongAnimal& other);
		virtual ~WrongAnimal();
		
		std::string getType() const;
		void makeSound( void ) const;//Falta "virtual" así que no va a funcionar		

	protected:
		std::string _type;
};

#endif
