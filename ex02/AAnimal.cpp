#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal base class constructor called" << std::endl;
    type = "";
}

AAnimal::AAnimal(const AAnimal& newAAnimal ){
    std::cout << "AAnimal base class copy constructor called" << std::endl;
        type = newAAnimal.getType();
}

AAnimal& AAnimal::operator=(const AAnimal& newAAnimal){
    if(this != &newAAnimal)
    {
        this->type = newAAnimal.getType();
    }
    return(*this);
}

// void AAnimal::makeSound() const {
//     std::cout << "AAnimal sound!!!"<< std::endl;
// }

const std::string& AAnimal::getType() const{
    return (this->type);
}

void AAnimal::setType(std::string& newtype){
    type = newtype;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal base class deconstructor called" << std::endl;
}

