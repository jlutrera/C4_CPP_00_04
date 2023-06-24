
#include "Zombie.hpp"

Zombie::Zombie(){
	
}

Zombie::~Zombie(){
	
}

void Zombie::setName(std::string name){
	this->_name = name;
}
void Zombie::announce(int i){
	std::cout << "    " << this->_name
			  << "[" << i + 1 << "]" << ":"
			  << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}