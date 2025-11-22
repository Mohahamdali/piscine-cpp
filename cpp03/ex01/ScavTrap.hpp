#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP




#include "../ex00/Claptrap.hpp"



class Scavtrap : ClapTrap
{
    public:
        void guardGate();
        Scavtrap(std::string name);
        ~Scavtrap();
};

#endif