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


// std::string const & Cure::getType() const{
//     return (type);
// }

void Cure::setType(std::string const &other){
    type = other;
}


AMateria* Cure::clone() const {
    Cure *other = new Cure(*this);
    return (other);
}

void Cure::use(ICharacter& target){
    std::cout <<"* shoots an ice bolt at "<< target.getName() <<" *"<<std::endl;
}



Cure::~Cure(){
}

