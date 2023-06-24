#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <vector>

class Zombie{
	private:
		std::string	_name;
	public:
		Zombie();
		~Zombie();
		void announce(int i);
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif