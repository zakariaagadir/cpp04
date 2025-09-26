#include "Cure.hpp"



Cure::Cure(){
    type = "cure";
}

Cure::Cure(const Cure &other){
    this->type = other.getType();
}

Cure& Cure::operator=(const Cure& other){
    if (this != &other)
    {
        this->setType( other.getType());
    }
    return (*this);
}






