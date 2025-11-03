#ifndef WEAPON_HPP
#define WEAPON_HPP



#include <iostream>



class Weapon
{
    private:
        std::string type_weapon;
    public:
        Weapon(const std::string &weapon_type){
            if (weapon_type.empty())
                type_weapon = "no weapon name";
            else 
                type_weapon = weapon_type;
        }
        const std::string &getType() const;
        void setType(const std::string &new_weapon);
};










#endif