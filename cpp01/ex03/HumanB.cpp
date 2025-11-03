#include "HumanB.hpp"



HumanB::HumanB(std::string Name) : name(Name) , weap(NULL) {

}


void HumanB::setWeapon(Weapon &wep)
{
    weap = &wep;
}

void HumanB::attack() const
{
       if (weap)
            std::cout << name << " attacks with their " << weap->getType() << std::endl;
        else
            std::cout << name << " has no weapon!" << std::endl;
}