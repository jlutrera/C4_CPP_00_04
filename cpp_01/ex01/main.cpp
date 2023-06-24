#include "Zombie.hpp"
#include <stdlib.h>

int main(void){
		std::string name;

		std::cout << "Type a zombie name > ";
		std::cin >> name;
		
		std::cout << "How many zombies do you want ? ";
		int N;
		std::cin >> N;
		while (N <= 0){
			std::cout << "How many zombies do you want ? ";
			std::cin >> N;
		}
		std::cout << "\nCreating zombies " << std::endl;
		Zombie *zombie1 = zombieHorde(N, name);
		for (int i=0; i<N; i++)
			zombie1[i].announce(i);
		delete [] zombie1;
		std::cout << "Zombies destroyed.\n" << std::endl;
		
		return 0;
}