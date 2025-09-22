#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog derived class constructor called" << std::endl;
    type = "Dog";
}

void Dog::makeSound() const {
    std::cout << "Haw Haw"<< std::endl;
}



Dog::~Dog(){
    std::cout << "Dog derived class deconstructor called" << std::endl;
}