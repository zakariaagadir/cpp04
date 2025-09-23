#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog derived class constructor called" << std::endl;
    type = "Dog";
}


const std::string& Dog::getType() const{
    return (this->type);
}

void Dog::setType(std::string& newtype){
    type = newtype;
}

Dog& Dog::operator=(const Dog& newdog){
    if(this != &newdog)
    {
        this->type = newdog.getType();
    }
    return(*this);
}


void Dog::makeSound() const {
    std::cout << "Haw Haw"<< std::endl;
}



Dog::~Dog(){
    std::cout << "Dog derived class deconstructor called" << std::endl;
}