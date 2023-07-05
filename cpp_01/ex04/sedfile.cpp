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
	infile.open((this->_fin));
	if (infile.fail())
		return 1;
	outfile.open(this->_fout);
	if (outfile.fail())
		return infile.close(), 1;
	return 0;
}

void SedFile::closeFiles()
{
	infile.close();
	outfile.close();
}

void SedFile::replace( void )
{  
	std::string s = "";
    std::size_t found;
    std::string ptr ;

	while (!(this->infile).eof())
    {
    	std::getline(this->infile, s);
        found = s.find(this->_s1);
        while (found != std::string::npos)
        {
            s.replace(found, (this->_s1).size(), this->_s2);
			std::cout << "s = " << s << std::endl;
			ptr += s.substr(0, found + (this->_s2).size());
			std::cout << "ptr =  " << ptr << std::endl;
			s = s.substr(found + (this->_s2).size());
			std::cout << "substr s =  " << s << std::endl;
            found = s.find(this->_s1);
        }
        this->outfile << ptr + s << std::endl;
		s = "";
		ptr = "";
    }
}