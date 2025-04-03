#include <iostream>

class Zombie
{
    public:
        void announce();
        Zombie(std::string name);
        ~Zombie();
    private:
        std::string _name;
};