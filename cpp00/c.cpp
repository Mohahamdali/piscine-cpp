#include <iostream>





bool is_Match (std::string s, std::string p)
{
    int i = 0;
    int matching;
    for (; i < s.size() && i < p.size(); i++)
    {
        if (s[i] == p[i])
            matching++;
    }
    if (i == s.size())
        return 1;
    return 0;
}





int main ()
{
    std:: cout << (bool)is_Match("aa","a") << std::endl;
}