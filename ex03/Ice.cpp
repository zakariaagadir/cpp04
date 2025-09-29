#include "Ice.hpp"
#include <iostream>


Ice::Ice() : AMateria("ice") {
}

Ice::Ice(const Ice &other) : AMateria(other) {
}

Ice& Ice::operator=(const Ice& other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return (*this);
}


AMateria* Ice::clone() const {
    Ice *n = new Ice(*this);
    return (n); 
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {
    std::cout << "Ice Materia destroyed." << std::endl;
}
