#include <iostream>

class Weapon{
    public:
        Weapon();
        ~Weapon();
        std::string& getType(std::string s);
        void setType(std::string new_s, std::string s);
    private:
        std::string type;
};
