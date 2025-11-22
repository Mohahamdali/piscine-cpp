#include "ScavTrap.hpp"



Scavtrap::Scavtrap(std::string name) : ClapTrap(name)
{
    hit_point = 100;
    energie_point = 50;
    attack_damage = 20;
    default_constractor_message;
}

Scavtrap::~Scavtrap()
{
    destructor_message;
}


void Scavtrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}
