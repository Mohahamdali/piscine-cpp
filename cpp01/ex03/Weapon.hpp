#ifndef WEAPON_HPP
#define WEAPON_HPP



#include <iostream>



class Weapon
{
    private:
        std::string type_weapon;
    public:
        const std::string &getType() const;
        void setType(const std::string &new_weapon);
};










#endif