#include <iostream>

int main( void )
{
    std::string s = "HI THIS IS BRAIN";
    std::string* stringPTR = &s;  //puntero a s
    std::string& stringREF = s; // referencia a s

    std::cout << "Dirección del string   : " << &s << std::endl;
    std::cout << "Contenido de stringPTR : " << stringPTR << std::endl;
    std::cout << "Contenido de stringREF : " << &stringREF << std::endl;

    std::cout << "Valor del string             : " << s << std::endl;
    std::cout << "Valor apuntado por stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valor apuntado por stringREF : " << stringREF << std::endl;
    
    return 0;

}