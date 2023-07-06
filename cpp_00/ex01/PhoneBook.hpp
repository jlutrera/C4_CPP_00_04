/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:36:06 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 14:05:12 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#	define PHONEBOOK_HPP

#	include "Contact.hpp"

class PhoneBook{
	private:
	    Contact	_contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact();
		void	printContacts() const;
		void	search() const;
};
 
#endif