/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:42:58 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:42:59 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#  define HARLFILTER_HPP

#  include <iostream>

class HarlFilter{
	public:
		HarlFilter();
		~HarlFilter();
		void complainFilter( std::string level );
		
	private:
		void debug();
		void info();
		void warning();
		void error();
};

#endif