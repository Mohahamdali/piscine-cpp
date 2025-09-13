#ifndef FIXED_HPP
#define FIXED_HPP



#include <iostream>

class Fixed
{
    private:
        int value;
        static int bit;
    public:
        Fixed();
        Fixed(Fixed &other);
        ~Fixed();
        Fixed& operator=(const Fixed &other);
        int getRawBits() const;
        void setRawBits(int const raw);
};













#endif