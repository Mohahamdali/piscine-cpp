#include "Zombie.hpp"



Zombie::Zombie() : Name("test"){}
Zombie::Zombie(const std::string& name) : Name(name) {}



void Zombie::set_name_zombie(const std::string name)
{
   Name = name;
}


Zombie* zombieHorde( int N, std::string name)
{
    if (N <= 0)
        return NULL;
    Zombie *p  = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        p[i].set_name_zombie(name);
        p[i].announce();
    }

    return p;
}


void zombie_die(Zombie *ref_zombie)
{
    delete []ref_zombie;
}

void Zombie::announce() const
{
    std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
