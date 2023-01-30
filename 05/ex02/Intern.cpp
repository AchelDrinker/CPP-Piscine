#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern's constructor is called." << std::endl;
}

Intern::Intern(Intern const& i)
{
    std::cout << "Copy Intern constructor is called." << std::endl; 
    *this = i;
    return;
}

Intern& Intern::operator=(Intern const& i)
{
    std::cout << "operator Intern is called." << std::endl;
    *this = i;
}

Intern::~Intern()
{
    std::cout << "Intern's destructor is called." << std::endl;
}