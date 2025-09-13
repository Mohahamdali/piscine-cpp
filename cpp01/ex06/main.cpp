#include "Harl.hpp"







int main (int ac, char **av)
{
    Harl harl;

    if (ac < 2)
    {
        std::cerr << "Usage: ./harlFilter <LOG_LEVEL>" << std::endl;
        return 1;
    }
    std::string log = av[1];
    harl.complain(log);
}
