#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat derived class constructor called" << std::endl;
    type = "Cat";
    this->brain = new Brain();
}
Cat::Cat(const Cat& newcat){
    std::cout << "Cat derived class copy constructor called" << std::endl;
    this->type = newcat.getType();
    delete (this->brain);
    this->brain = new Brain(*(newcat.getBrain()));
}

Cat& Cat::operator=(const Cat& newcat){
    if(this != &newcat)
    {
        this->type = newcat.getType();
    }
    return(*this);
}

const std::string& Cat::getType() const{
    return (this->type);
}

const Brain* Cat::getBrain() const{
    return (this->brain);
}

void Cat::setType(std::string& newtype){
    type = newtype;
}


void Cat::makeSound() const {
    std::cout << " Meow" << std::endl;
}


Cat::~Cat(){
    std::cout << "Cat derived class deconstructor called" << std::endl;
}