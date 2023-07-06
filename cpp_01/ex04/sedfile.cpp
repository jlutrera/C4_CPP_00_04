/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sedfile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutrera- <jutrera-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:41:53 by jutrera-          #+#    #+#             */
/*   Updated: 2023/07/06 13:41:53 by jutrera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedFile.hpp"

SedFile::SedFile( void )
{

}

SedFile::~SedFile( void )
{

}

SedFile::SedFile(char **argv)
{
	this->_fin = argv[1];       
	this->_fout = this->_fin + ".replace";
	this->_s1 = argv[2];
	this->_s2 = argv[3];
}

int SedFile::openFiles()
{
	_infile.open((this->_fin));
	if (_infile.fail())
		return 1;
	_outfile.open(this->_fout);
	if (_outfile.fail())
		return _infile.close(), 1;
	return 0;
}

void SedFile::closeFiles()
{
	_infile.close();
	_outfile.close();
}

void SedFile::replace( void )
{  
	std::string s;
    std::size_t found;
    std::string ptr;

	while (!(this->_infile).eof())
    {
    	std::getline(this->_infile, s);
        found = s.find(this->_s1);
		ptr = "";
        while (found != std::string::npos)
        {    
            s.replace(found, (this->_s1).size(), this->_s2);
			ptr += s.substr(0, found + (this->_s2).size());
			s.erase(0, found + (this->_s2).size());
            found = s.find(this->_s1);
        }
        this->_outfile << ptr + s << std::endl;
    }
}
