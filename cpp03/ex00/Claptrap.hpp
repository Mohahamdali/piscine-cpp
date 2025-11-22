#ifndef CLAPTRAP_H
#define CLAPTRAP_H



#include <iostream>

#define copy_constractor_message \
    std::cout << "Copy constractor called by me" << std::endl;
#define default_constractor_message \
    std::cout << "Default constractor called by me" << std::endl;
#define destructor_message \
    std::cout << "ClapTrap destructor called" << std::endl;

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &obj_cpy);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        // ClapTrap &operator=(const ClapTrap &obj);
    protected:
        std::string name;
        int hit_point;
        int energie_point;
        int attack_damage;
};



#endif