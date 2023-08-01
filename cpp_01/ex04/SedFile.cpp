/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedFile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:53 by jutrera-          #+#    #+#             */
/*   Updated: 2023/08/01 14:36:06 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedFile.hpp"

SedFile::~SedFile( void )
{
	_infile.close();
	_outfile.close();
}

SedFile::SedFile(char **argv)
{
	this->_fin = argv[1];       
	this->_fout = this->_fin + ".replace";
	this->_s1 = argv[2];
	this->_s2 = argv[3];
}

void SedFile::ft_replace( void )
{  
	std::string s;
    std::size_t found;
    std::string ptr;

	this->_infile.open(this->_fin);
	if (this->_infile.is_open())
	{
    	if (std::getline(this->_infile, s, '\0'))
		{
			this->_outfile.open(this->_fout);
			if (this->_outfile.is_open())
			{
		        found = s.find(this->_s1);
				ptr = "";
		        while (found != std::string::npos)
	    	    {    
					ptr += s.substr( 0, found ) + this->_s2;
					s.erase( 0, found + (this->_s1).length() );
	            	found = s.find( this->_s1 );
	        	}
	        	this->_outfile << ptr + s;
	 		}
			else
				std::cerr << this->_fout + " cannot be created !" << std::endl;
		}
		else
			std::cerr << this->_fin + " is an empty file !" << std::endl;
	}
	else
		std::cerr << this->_fin + " cannot be opened !" << std::endl;
}
