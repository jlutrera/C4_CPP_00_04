#ifndef WEAPON_HPP
#  define WEAPON_HPP

#  include <iostream>

class Weapon{
    public:
        Weapon();
		Weapon(std::string s);
        ~Weapon();
        std::string& getType();
        void setType(std::string new_s);
    private:
        std::string _type;
};

#endif