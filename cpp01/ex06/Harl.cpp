#include "Harl.hpp"





void Harl::debug ()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}

void Harl::info ()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning ()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month" << std:: endl;

}

void Harl::error ()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}



void Harl::complain( std::string level)
{
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*p[])() ={&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i =0;
    for(; i < 4; i++)
    {
        if (str[i] == level)
           break;
    }
    switch (i)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            for (;i < 4; i++)
            {
                (this->*p[i])();
              
            }
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

    }
}
