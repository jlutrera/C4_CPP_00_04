/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:56 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/02 14:17:28 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#  define CAT_HPP

#  include "Animal.hpp"
#  include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		~Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat& other);

		void makeSound( void ) const;
		std::string getBrain(int i) const;
		void setBrain(int i, std::string str);
	
	private:
		Brain* _brain;
};

#endif