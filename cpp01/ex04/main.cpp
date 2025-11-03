
#include "data.hpp"



int main(int ac, char **av)
{
    t_data  data;
    if (ac != 4) {
        std::cerr << "Usage: ./program <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    data.filename = av[1];
    data.s1 = av[2];
    data.s2 = av[3];
    if (data.s1.empty()) {
        std::cerr << "Error: search string cannot be empty!" << std::endl;
        return 1;
    }
    
    std::ifstream input(av[1]);
    if (!input.is_open())
    {
        std::cerr << "Error open file!" << std::endl;
        return 1;
    }
    std::ofstream output((data.filename + ".replace").c_str());

    if (!output.is_open()) {
        std::cerr << "Error creating output file!" << std::endl;
        input.close();
        return 1;
    }
    
    std::string line;
    while (getline(input, line))
    {
        std::string result;
        size_t pos = 0;
        size_t found;
        
        while ((found = line.find(data.s1, pos)) != std::string::npos)
        {
            result += line.substr(pos, found - pos); 
            result += data.s2;                   
            pos = found + data.s1.length();   
        }
        result += line.substr(pos); 
        
        output << result << std::endl;
    }
    
    input.close(); 
    output.close();
    return 0;
}