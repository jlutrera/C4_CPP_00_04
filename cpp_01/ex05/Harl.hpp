/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:42:33 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:42:34 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#  define HARL_HPP

#  include <iostream>

class Harl{
	public:
		Harl();
		~Harl();
		void complain( std::string level );
		
	private:
		void debug();
		void info();
		void warning();
		void error();
};

typedef void (Harl::* ptrf)();

#endif