/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:47 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:47 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#  define AANIMAL_HPP

#  include <iostream>
#  include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal( void );
		AAnimal(std::string type);
		AAnimal(const AAnimal &other);
		AAnimal& operator=(const AAnimal& other);
		std::string getType() const;
		virtual ~AAnimal();
		virtual void makeSound( void ) const = 0;

	protected:
		std::string _type;
};

#endif