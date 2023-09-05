/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:30:45 by jutrera-          #+#    #+#             */
/*   Updated: 2023/09/05 15:46:55 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#  define BRAIN_HPP

#  include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &other);
		virtual ~Brain();
		virtual Brain& operator=(const Brain &other);

		virtual std::string getBrain(int i) const;
		virtual void setBrain(int i, std::string str);

	protected:
		std::string _ideas[100];
};

#endif
