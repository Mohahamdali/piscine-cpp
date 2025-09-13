#include "Weapon.hpp"




const std::string &Weapon::getType ()const
{
    return type_weapon;
}

void Weapon::setType(const std::string &new_weapon)
{
    type_weapon = new_weapon;
}