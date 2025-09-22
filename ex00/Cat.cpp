#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat derived class constructor called" << std::endl;
    type = "Cat";
}

void Cat::makeSound() const {
    std::cout << " Meow" << std::endl;
}


Cat::~Cat(){
    std::cout << "Cat derived class deconstructor called" << std::endl;
}