#include "Fixed.hpp"



Fixed::Fixed() : value(0)
{
     std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (Fixed  &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this ->value = other.value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits (int const raw)
{
    value = raw;
}



Fixed& Fixed::operator=(const Fixed &other)
{
     std::cout << "Copy assignment operator called" << std::endl;
     if (this ->value != other.value)
        this ->value = other.value;
    return *this;
}