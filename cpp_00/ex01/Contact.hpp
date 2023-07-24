/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:35:30 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/24 12:07:43 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#	define CONTACT_HPP

#	include <iostream>
#	include <iomanip>
#	include <sstream>
#   include <string>

// Because I prefer a bit of colour
const std::string RESET 	= "\033[0m";
const std::string RED 		= "\033[31m";
const std::string GREEN 	= "\033[32m";
const std::string YELLOW 	= "\033[33m";
const std::string BLUE 		= "\033[34m";

class Contact{
	public:
		Contact();
		~Contact();
		void    init( int i );
		void    view( int index ) const;
		void    display( int index ) const;
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int         _index;
		std::string _printLen( std::string str ) const;
		std::string _getInput( std::string str ) const;
};

#endif