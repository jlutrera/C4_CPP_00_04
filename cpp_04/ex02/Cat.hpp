/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:56 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:30:56 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#  define CAT_HPP

#  include "AAnimal.hpp"

class Cat : public AAnimal
{
	public:
		Cat( void );
		virtual ~Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat& other);

		virtual void makeSound( void ) const;
		std::string getBrain(int i) const;
		void setBrain(int i, std::string str);
	
	private:
		Brain* _brain;
};

#endif