#include "Brain.hpp"



Brain::Brain(){
    for (int i = 0; i<100; i++)
    {
        ideas[i] = "defult";
    }
}


Brain::Brain(const Brain& newbrain){
    for (int i = 0; i<100; i++)
    {
        ideas[i] = newbrain.getideas()[i];
    }
}


Brain& Brain::operator=(const Brain& newbrain){
    if (this != &newbrain)
    {
        for (int i = 0; i<100; i++)
        {
            ideas[i] = newbrain.getideas()[i];
        }
    }
    return (*this);
}


const std::string* Brain::getideas() const{
    return(this->ideas);
}


void Brain::setideas(std::string* newideas){
    for (int i = 0; i<100; i++)
    {
        ideas[i] = newideas[i];
    }
}

Brain::~Brain(){

}


