#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal base class constructor called" << std::endl;
    type = "";
}

Animal::Animal(const Animal& newanimal ){
    std::cout << "Animal base class copy constructor called" << std::endl;
        type = newanimal.getType();
}

Animal& Animal::operator=(const Animal& newanimal){
    if(this != &newanimal)
    {
        this->type = newanimal.getType();
    }
    return(*this);
}

void Animal::makeSound() const {
    std::cout << "Animal sound!!!"<< std::endl;
}

const std::string& Animal::getType() const{
    return (this->type);
}

void Animal::setType(std::string& newtype){
    type = newtype;
}

Animal::~Animal(){
    std::cout << "Animal base class deconstructor called" << std::endl;
}

