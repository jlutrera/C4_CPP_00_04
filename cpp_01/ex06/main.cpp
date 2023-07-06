/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:43:07 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:43:08 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		HarlFilter h;
		h.complainFilter(argv[1]);
	}
	return 0;
}