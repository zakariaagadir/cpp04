#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(){
    std::cout << "Dog derived class constructor called" << std::endl;
    type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog& newdog):Animal(newdog){
    std::cout << "Dog derived class copy constructor called" << std::endl;
    this->brain = new Brain(*newdog.brain);
}

Dog& Dog::operator=(const Dog& newdog){
    if (this != &newdog)
    {
        Animal::operator=(newdog);
        Brain *temp = new Brain();
        delete (this->brain);
        this->brain = temp;
    }
    return(*this);
}

const Brain* Dog::getBrain() const{
    return (this->brain);
}

void  Dog::setBrain(Brain* newbrain){
    if(this->brain != newbrain)
    {
        Brain *temp = new Brain(*newbrain);
        delete(this->brain);
        this->brain = temp;
    }
}

const std::string& Dog::getType() const{
    return (this->type);
}

void Dog::setType(std::string& newtype){
    type = newtype;
}



void Dog::makeSound() const {
    std::cout << "Haw Haw"<< std::endl;
}



Dog::~Dog(){
    std::cout << "Dog derived class deconstructor called" << std::endl;
    delete(brain);
}