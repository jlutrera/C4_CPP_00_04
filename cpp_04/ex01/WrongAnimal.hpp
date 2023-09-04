/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:21 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/02 14:15:20 by jutrera-         ###   ########.fr       */
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
		virtual ~WrongAnimal();		
		WrongAnimal(const WrongAnimal &other);
		virtual WrongAnimal& operator=(const WrongAnimal& other);

		std::string getType() const;
		void makeSound( void ) const;

	protected:
		std::string _type;
};

#endif