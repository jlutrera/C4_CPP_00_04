/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:31:33 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/16 17:31:33 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#  define WRONGCAT_HPP

#  include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		~WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat& operator=(const WrongCat& other);

		void makeSound( void ) const;
	private:
		Brain* _brain;
};

#endif