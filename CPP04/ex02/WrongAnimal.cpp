#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Misterious animal")
{
    std::cout << "Misterious animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type)
{
    if(type.empty())
        _type = "Misterious animal";
    std::cout << _type << " constructor called" << std::endl;    
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
     std::cout << "animal clone machine called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "The animal is dead" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    if(this != &copy)
        _type = copy._type;
    return(*this);
}

void WrongAnimal::Wrongmakesound(void) const
{
    std::cout << _type << " makes a weird sound" << std::endl;
}

std::string WrongAnimal::WronggetType() const
{
    return(this->_type);
}
