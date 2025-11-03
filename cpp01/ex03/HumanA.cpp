#include "HumanA.hpp"



HumanA::HumanA(std::string Name, Weapon &wep) : name(Name), weap(wep) 
{}

void HumanA::attack() const
{
    std::cout << name << " attacks with their " << weap.getType() << std::endl;
}