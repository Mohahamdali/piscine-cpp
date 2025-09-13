#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP



#include <iostream>

class Zombie
{
    private:
        std::string Name;
    public:
        Zombie();
        Zombie(const std::string& name);
        void set_name_zombie(const std::string name);
        void announce() const;
};



Zombie* zombieHorde( int N, std::string name);
void    zombie_die(Zombie *ref_zombie);



#endif