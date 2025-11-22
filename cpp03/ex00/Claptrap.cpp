#include "Claptrap.hpp"

ClapTrap::ClapTrap(std:: string Name) :  name(Name), hit_point(10),energie_point(10), \
 attack_damage(0) 
 {default_constractor_message}

ClapTrap::ClapTrap(const ClapTrap &obj_cpy)
{
    copy_constractor_message;
    this -> name = obj_cpy.name;
    this -> hit_point = obj_cpy.hit_point;
    this -> attack_damage = obj_cpy.attack_damage;
    this -> energie_point = obj_cpy.energie_point;
}

// ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
// {
// }

void ClapTrap::attack(const std::string &target)
{
    (void)target;
    if (hit_point > 0 && energie_point > 0)
    {
        std::cout << "drab" << std::endl;
        hit_point--;
        energie_point--;
    }
    else
        std::cout << "died or deast have energie enough" << std::endl;
   
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (energie_point > 0 || hit_point > 0)
    {
        if (hit_point <=0)
        {
            std::cout << "no hp have so i died" << std::endl;
            return;
        }
        else
            std::cout << "I take damage" << std::endl;
        hit_point -= amount;
    }
    else 
        std::cout << "No energie point have!" << std::endl;
     std::cout << hit_point <<"\n";
}

void ClapTrap::beRepaired (unsigned int amount)
{
    if (energie_point > 0 && hit_point >= 0)
    {
        hit_point+=amount;
        energie_point--;
    }
    if (hit_point < 0)
    {
        std::cout << "cant repaired someone die" << std::endl;
        return ;
    }
    else if(energie_point <= 0)
        std::cout << "deasnt have energue enought to repeared them " << std::endl;
    std::cout << hit_point <<"\n";
    }

ClapTrap::~ClapTrap() {
    destructor_message;
}
