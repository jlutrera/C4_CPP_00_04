#include "Sedfile.hpp"

SedFile::SedFile(char **argv)
{
	this->_fin = argv[1];
	this->_fout = this->_fin + ".replace";
	this->_s1 = argv[2];
	this->_s2 = argv[3];
}

SedFile::~SedFile( void )
{

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
	std::string s;
    std::size_t found;
    std::string *ptr;

	while (!(this->infile).eof())
    {
    	std::getline(this->infile, s);
        found = s.find(this->_s1);
        ptr = &s;
        while (found != std::string::npos)
        {
            (*ptr).replace(found, (this->_s1).size(), this->_s2);
            ptr += found + (this->_s2).size();
            found = (*ptr).find(this->_s1);
        }
        this->outfile << s << std::endl;
    }
}