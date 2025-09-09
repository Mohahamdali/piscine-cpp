#include "Zombie.hpp"

Zombie::Zombie() : name("DefaultZombie") { }

Zombie::Zombie(const std::string& Name) : name(Name) { }

Zombie::~Zombie()
{
    std::cout << name << " is destroyed." << std::endl;
}

void Zombie::announce() const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie *newZombie(std::string name)
 {
    return new Zombie(name);
 }





void randomChump(std::string name)
{
    Zombie z1(name);
    z1.announce();
}