/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:29:35 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:35 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#  define CAT_HPP

#  include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat( void );
		virtual ~Cat();
		Cat(const Cat &other);
		Cat& operator=(const Cat& other);

		void makeSound( void ) const;
};

#endif