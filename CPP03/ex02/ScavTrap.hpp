

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP


#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
    ScavTrap(const ScavTrap &obj);
    ~ScavTrap();
    ScavTrap(std::string nn);
    ScavTrap& operator=(const ScavTrap &obj);
    void attack(const std::string& target) ;
    void guardGate();
};




#endif