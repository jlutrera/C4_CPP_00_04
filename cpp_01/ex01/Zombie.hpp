/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:39:55 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/24 12:08:45 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <sstream>
# include <string>

class Zombie{

	public:
		Zombie();
		~Zombie();
		void announce() const;
		void setName( std::string name );
		
	private:
		std::string	_name;
};

Zombie* zombieHorde( int N, std::string name );

#endif