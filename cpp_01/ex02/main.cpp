/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:40:24 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:40:26 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
    std::string s = "HI THIS IS BRAIN";
    std::string * stringPTR = &s;  //puntero a s
    std::string & stringREF = s; // referencia a s

    std::cout << "Dirección del string   : " << &s << std::endl;
    std::cout << "Contenido de stringPTR : " << stringPTR << std::endl;
    std::cout << "Contenido de stringREF : " << &stringREF << std::endl;

    std::cout << "Valor del string             : " << s << std::endl;
    std::cout << "Valor apuntado por stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valor apuntado por stringREF : " << stringREF << std::endl;
    
    return 0;

}